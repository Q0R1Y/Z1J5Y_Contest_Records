#include<bits/stdc++.h>
#define int ll

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

ll k[LEN],dp[LEN];
//dp[i]为第i人入第dp[i]支乐团,则他要么入dp[i-1]支
//要么与(i-k[i],i]重新组建一支

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    std::cin>>n;
    for(int i=1;i<=n;++i)
    {
        std::cin>>k[i];
    }
    std::sort(k+1,1+k+n);
    if(k[n]>n)
    {
        std::cout<<-1;
        return 0;
    }
    for(int i=1;i<=n;++i)
    {
        if(k[i]<=i)
            dp[i]=std::max(dp[i-1],dp[i-k[i]]+1);
    }
    std::cout<<dp[n];

    return 0;
}
