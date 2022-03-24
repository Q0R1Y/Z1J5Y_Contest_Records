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

double k[LEN];

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,m;
    std::cin>>n>>m;
    double t;
    for(ll i=1;i<=n-m;++i) 
    {
        std::cin>>t;
        k[i]=k[i-1]+t;
    }
    std::cout<<double(k[n-m]+double(m)*1)/5<<" ";
    std::cout<<double(k[n-m]+double(m)*5)/5;



    return 0;
}
