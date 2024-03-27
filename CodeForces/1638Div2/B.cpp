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

std::vector<std::vector<int>> k(2);
// int t[LEN];

void solve()
{
    int t,n;
    std::cin>>n;
    k[0].clear();
    k[1].clear();
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        k[t&1].push_back(t);
        // t[i]=k[i];
    }
    // std::sort(t,t+n);
    bool flag=true;
    // int t1=0,t2=0;
    for(int i=0;i<2;++i)
        for(int j=1;j<k[i].size();++j)
            if(k[i][j]<k[i][j-1])
                flag=false;
    if(flag)
        std::cout<<"YeS\n";
    else
        std::cout<<"No\n";
}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    int T;
    std::cin>>T;
    while(T--)
    {
        solve();
    }





    return 0;
}
