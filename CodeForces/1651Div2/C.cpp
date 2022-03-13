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

ll a[LEN];
ll b[LEN];

void solve()
{
    ll n;
    std::cin>>n;
    for(int i=1;i<=n;++i)
        std::cin>>a[i];
    for(int i=1;i<=n;++i)
        std::cin>>b[i];
    
    ll ahead=a[1],atail=a[n];
    ll bhead=b[1],btail=b[n];
    ll ta1=INF,ta2=INF,tb1=INF,tb2=INF;
    for(int i=1;i<=n;++i)
    {
        ta1=std::min(ta1,std::abs(b[i]-ahead));
        ta2=std::min(ta2,std::abs(b[i]-atail));
        tb1=std::min(tb1,std::abs(a[i]-bhead));
        tb2=std::min(tb2,std::abs(a[i]-btail));
    }
    ll res=std::min({
        ta1+ta2+tb1+tb2,
        std::abs(ahead-bhead)+ta2+tb2,
        std::abs(atail-btail)+ta1+tb1,
        std::abs(atail-bhead)+ta1+tb2,
        std::abs(ahead-btail)+ta2+tb1,
        std::abs(ahead-bhead)+std::abs(atail-btail),
        std::abs(ahead-btail)+std::abs(atail-bhead)
    });
    std::cout<<res<<"\n";
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
