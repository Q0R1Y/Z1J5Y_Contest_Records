#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int k[57][57][57];

void solve()
{
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            std::cout<<k[n][i][j]<<" ";
        }
        std::cout<<"\n";
    }

}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    k[3][0][0]=3;
    k[3][0][1]=2;
    k[3][0][2]=1;
    k[3][1][0]=3;
    k[3][1][1]=1;
    k[3][1][2]=2;
    k[3][2][0]=1;
    k[3][2][1]=3;
    k[3][2][2]=2;
    for(int i=4;i<=50;++i)
    {
        for(int j=0;j<i;++j)
        {
            k[i][j][0]=i;
            for(int n=1;n<i;++n)
            {
                k[i][j][n]=k[i-1][j][n-1];
            }
        }
        for(int n=0;n<i-1;++n)
            k[i][i-1][n]=k[i-1][i-2][n];
        k[i][i-1][i-1]=i;
    }



    int T;
    std::cin>>T;
    while(T--)
    {
        solve();
    }





    return 0;
}
