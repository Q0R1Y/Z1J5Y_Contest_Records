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

// ll k[LEN];

void solve()
{
    int n,t;
    std::cin>>n;
    int max=-1,maxi;
    int min=INF,mini;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        if(max<t)
        {
            max=t;
            maxi=i+1;
        }
        if(min>t)
        {
            min=t;
            mini=i+1;
        }
    }
    std::cout<<mini<<" "<<maxi<<"\n";
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
