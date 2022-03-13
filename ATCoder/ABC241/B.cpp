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

std::map<ll,ll> map;


int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    ll n,m,t;
    std::cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        map[t]++;
    }
    for(int i=0;i<m;++i)
    {
        std::cin>>t;
        if(map[t]==0)
        {
            std::cout<<"No\n";
            return 0;
        }
        else
            map[t]--;
    }
    std::cout<<"Yes\n";



    return 0;
}
