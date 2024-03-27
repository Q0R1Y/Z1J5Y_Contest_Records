#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e2+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k[LEN]
{
1,
4,
13,
40,
121,
364,
1093,
3280,
9841,
29524,
88573,
265720,
797161,
2391484,
7174453,
21523360,
64570081,
193710244,
581130733,
1743392200
};

void solve()
{
    ll n;
    std::cin>>n;
    if(n>19)
    {
        std::cout<<"NO\n";
        return ;
    }
    std::cout<<"YES\n";
    for(int i=0;i<n;++i)
        std::cout<<k[i]<<" ";
    std::cout<<"\n";
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
