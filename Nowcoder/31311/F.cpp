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

std::vector<std::pair<ll,ll>> k;     

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,m;
    std::cin>>n>>m;
    int x,y;
    for(int i=0;i<m;++i)
    {
        std::cin>>x>>y;
        k.push_back(std::make_pair(x,y));
    }
    



    return 0;
}
