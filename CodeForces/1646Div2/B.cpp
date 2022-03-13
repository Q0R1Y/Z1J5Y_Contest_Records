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

ll k[LEN];

void solve()
{
    
    ll n;
    std::cin>>n;
    // scanf("%lld",&n);
    for(int i=0;i<n;++i)
    {
        std::cin>>k[i];
        // scanf("%lld",&k[i]);
    }
    std::sort(k,k+n);
    ll l=k[0],b=0;
    for(int i=1,j=n-1;i<j;++i,--j)
    {
        l+=k[i];
        b+=k[j];
        if(b>l)
        {
            std::cout<<"YES\n";
            return ;
        }
    }
    std::cout<<"NO\n";
}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    int T;
    std::cin>>T;
    // scanf("%d",&T);
    while(T--)
    {
        solve();
    }





    return 0;
}
