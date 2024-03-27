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

ll r[LEN];
ll c[LEN];
signed main()
{
    PPP();



    ll n,m;
    // std::cin>>n>>m;
    scanf("%lld%lld",&n,&m);
    std::vector<std::vector<ll>> v(n+1,std::vector<ll>(m+1));
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            scanf("%lld",&v[i][j]);
            r[i]+=v[i][j];
            c[j]+=v[i][j];
        }
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            printf("%lld ",r[i]+c[j]-v[i][j]);
        }
        printf("\n");
    }



    return 0;
}
