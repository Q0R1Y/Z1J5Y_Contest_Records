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
const ll LEN=1e1+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k[LEN];
ll res,sum[LEN];
signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,x;
    std::cin>>n>>x;
    for(ll i=1;i<=n;++i)
    {
        std::cin>>k[i];
        // sum[i]=sum[i-1]+k[i];
    }
    std::sort(k+1,k+n+1,std::greater<int>());
    if(x<=n)
    {
        res=k[x]*x;
        for(int i=1;i<x;++i)
            res+=k[i]-k[x];
    }
    else
    {
        for(int i=1;i<=n;++i)
            res+=k[i];
    }
    std::cout<<res;
    return 0;
}
