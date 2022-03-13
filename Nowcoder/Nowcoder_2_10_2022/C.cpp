#include<bits/stdc++.h>



void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e3+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll values[LEN],weight[LEN],volume[LEN];
ll dp[LEN][LEN][LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll v,m,n;
    scanf("%lld%lld",&v,&m);
    scanf("%lld",&n);
    for(ll i=1;i<=n;++i)
        scanf("%lld%lld%lld",&volume[i],&weight[i],&values[i]);

    for(int i=1;i<=n;++i)
        for(int j=v;j>=volume[i];--j)
            for(int k=m;m>=weight[i];--m)
                dp[i][j][k]=std::max(dp[i-1][j][k],dp[i-1][j-volume[i]][k-weight[i]]+values[i]);

    std::cout<<dp[n][v][m];
    
    return 0;
}
