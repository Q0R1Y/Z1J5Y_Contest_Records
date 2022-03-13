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

std::map<ll,bool> k;

void solve()
{
    k.clear();
    ll n,c,t;
    ll max=0;
    std::cin>>n>>c;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        if(max<t)
            max=t;
        k[t]=true;
    }
    if(k[1]==false)
    {
        std::cout<<"NO\n";
        return ;
    }
    ll tar=sqrt(c);
    for(auto it=k.begin();it!=k.end()&&it->first<=tar;++it)
    {
        if(!k[max/(it->first)])
        {
            std::cout<<"NO\n";
            return ;
        }
    }
    std::cout<<"YES\n";
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
