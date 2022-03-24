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
const ll LEN=60+7;
const ll MOD=1e9+7;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k0[LEN];
ll k1[LEN];

ll res;

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,t;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        for(int j=0;j<64;++j,t>>=1)
        {
            if(t&1)
                k1[j]++;
            else
                k0[j]++;
        }
    }
    t=1;
    for(int i=0;i<64;++i)
    {
        res=(res+(k1[i]*(k0[i]-1)*(k0[i])/2+(k1[i]-2)*(k1[i]-1)*k1[i]/6)%MOD*((t<<i)%MOD))%MOD;
    }

    std::cout<<res;

    return 0;
}
