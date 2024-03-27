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

ll w[LEN],v[LEN],dp[LEN][LEN];

int main()
{

    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,k;
    std::cin>>n>>k;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=k;j++)
            dp[i][j]=-LLINF;
    dp[0][0]=0;
    for(int i=1;i<=n;++i)
        std::cin>>w[i]>>v[i];
    for(int i=1;i<=n;++i)
        for(int j=k-1;j>=0;--j)
            dp[i][j]=std::max(dp[i-1][j],dp[i-1][(j-w[i]%k+k)%k]+v[i]);

    std::cout<<dp[n][0];



    return 0;
}
