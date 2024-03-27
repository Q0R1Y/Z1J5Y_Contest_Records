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

std::string t;
std::set<ll> p[2];
void solve()
{
    ll n,m,a,b;
    p[0].clear();
    p[1].clear();
    std::cin>>n>>m>>a>>b;
    for(ll i=0;i<n;++i)
    {
        std::cin>>t;
        for(ll j=0;j<m;++j)
        {
            if(j=='*')
            {
                p[0].emplace(i);
                p[1].emplace(j);
            }
        }
    }
    




}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    int T;
    std::cin>>T;
    while(T--)
    {
        solve();
    }





    return 0;
}
