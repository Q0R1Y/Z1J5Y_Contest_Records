#include<bits/stdc++.h>



void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=40+7;
const ll MOD=998244353;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,t=0;
    std::cin>>n;
    ll res=0;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        
        for(ll j=0;j<LEN;++j)
        {
            if((t>>j)&1)
            {
                res=(res+(i-k[j])*(1<<j)%MOD)%MOD;
            }
            else
            {
                res=(res+k[j]*(1<<j)%MOD)%MOD;
            }
        }
        for(int j=0;t;++j,t>>=1)
            if(t&1)
                k[j]++;
    }
    std::cout<<res;


    return 0;
}
