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

ll a[LEN];

void solve()
{
    int n,k;
    std::cin>>n>>k;
    for(int i=0;i<n;++i)
        std::cin>>a[i];

    std::sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        int in=std::lower_bound(a,a+n,a[i]-k)-a;
        if(!(a[in]!=a[i]-k||in==n))
        {
            std::cout<<"YES\n";
            return ;
        }
    }
    std::cout<<"NO\n";
}

signed main()
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
