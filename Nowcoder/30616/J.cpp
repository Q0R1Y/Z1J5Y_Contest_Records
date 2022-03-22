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

// ll k[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,t;
    std::cin>>n;
    ll max=-INF,min=INF;
    for(ll i=0;i<n;++i)
    {
        std::cin>>t;
        max=std::max(t,max);
        min=std::min(min,t);
    }
    std::cout<<max-min;




    return 0;
}
