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

bool flag[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,m;
    ll a,b;
    std::cin>>n>>m;
    for(ll i=0;i<m;++i)
    {
        std::cin>>a>>b;
        flag[b]=true;
    }
    ll res=0;
    for(ll i=1;i<=n;++i)
        res+=(!flag[i]);

    std::cout<<res;

    return 0;
}
