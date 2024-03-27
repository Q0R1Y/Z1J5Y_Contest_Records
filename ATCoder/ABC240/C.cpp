#include<bits/stdc++.h>



void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e4+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int dp[110][LEN];
int ab[2][110];


int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int x,n;
    std::cin>>n>>x;
    for(int i=0;i<n;++i)
        std::cin>>ab[0][i]>>ab[1][i];
    int min=ab[0][0];
    dp[0][ab[0][0]]=dp[0][ab[1][0]]=1;
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<=x;++j)
        {
            if(j-ab[0][i]>=0)
            {
                if(dp[i-1][j-ab[0][i]])
                    dp[i][j]=1;
            }
            if(j-ab[1][i]>=0)
            {
                if(dp[i-1][j-ab[1][i]])
                    dp[i][j]=1;
            }
        }
    }
    if(dp[n-1][x])
        std::cout<<"Yes";
    else
        std::cout<<"No";



    return 0;
}
