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
ll g1[LEN],g2[LEN];
ll n,d;
 
ll calc(ll g[])
{
    ll min=INF,max=-INF;
    for(ll i=1;i<n;++i)
    {
        if(g[i]-g[i-1]-1>max)
            max=g[i]-g[i-1]-1;
        if(g[i]-g[i-1]-1<min)
            min=g[i]-g[i-1]-1;
    }
    return std::min(min,std::max((max-1)/2,d-g[n-1]-1));
}
 
void solve()
{
    
    std::cin>>n>>d;
    ll min=INF,mini;
    for(ll i=1;i<=n;++i)
    {
        std::cin>>k[i];
        if(k[i]-k[i-1]-1<min)
        {
            min=k[i]-k[i-1]-1;
            mini=i;
        }
    }

    ll cnt1=0,cnt2=0;
    for(ll i=0;i<=n;++i)
    {
        if(i!=mini)
            g1[cnt1++]=k[i];
        if(i!=mini-1)
            g2[cnt2++]=k[i];
    }
    ll res=calc(g1);
    
    
    if(mini>1)
        std::cout<<std::max(res,calc(g2))<<"\n";
    else
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