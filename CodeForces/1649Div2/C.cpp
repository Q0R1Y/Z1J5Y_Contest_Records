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

std::map<ll,std::pair<std::vector<ll>,std::vector<ll>>> k;

ll calc(std::vector<ll> &a)
{
    std::sort(a.begin(),a.end());
    for(int i=1;i<a.size();++i)
        a[i]=a[i]+a[i-1];
    ll res=a.back()-a.size()*a[0];
    for(int i=1;i<a.size();++i)
        res+=a.back()-a[i-1]-(a.size()-i)*(a[i]-a[i-1]);
    return res;
}


void solve()
{   
    k.clear();
    ll n,m;
    std::cin>>n>>m;
    ll t;
    ll res=0;
    for(ll i=1;i<=n;++i)
    {
        for(ll j=1;j<=m;++j)
        {
            std::cin>>t;
            k[t].first.push_back(i);
            k[t].second.push_back(j);
        }
    }
    for(auto it=k.begin();it!=k.end();++it) 
    {
        res+=calc(it->second.first);
        res+=calc(it->second.second);
    }

    std::cout<<res;
}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    int T=1;
    // std::cin>>T;
    while(T--)
    {
        solve();
    }





    return 0;
}
