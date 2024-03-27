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

ll k[LEN];

void solve()
{
    int n,t;
    std::cin>>n;
    bool flag1=false;
    bool flag3=false;
    for(int i=0;i<n;++i)
    {
        std::cin>>k[i];
        if(k[i]==1)
            flag1=true;
    }
    std::sort(k,k+n);
    for(int i=0;i<n-1;++i)
        if(k[i+1]-k[i]==1)
            flag3=true;


    if(flag1&&flag3)
        std::cout<<"NO\n";
    else
        std::cout<<"YES\n";
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
