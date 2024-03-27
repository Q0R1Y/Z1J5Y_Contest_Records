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

// ll k[LEN];

void solve()
{
    ll n,t;
    std::cin>>n;
    std::deque<ll> k,res;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        k.push_back(t);
    }
    for(int i=n-1;i>-1;--i)
    {
        ll cnt=0;
        while(k[i]!=i+1)
        {
            cnt++;
            t=k.front();
            k.pop_front();
            k.push_back(t);
        }
        k.pop_back();
        res.push_back(cnt);
    }
    for(auto it=res.rbegin();it!=res.rend();++it)
        std::cout<<*it<<" ";
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
