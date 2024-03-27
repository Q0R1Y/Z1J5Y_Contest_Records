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
std::string a;
std::vector<char> s;
signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::cin>>a;
    for(int i=0;i<a.size();++i)
    {
        if(s.empty()||s.back()!=a[i])
            s.push_back(a[i]);
        else
            s.pop_back();
    
    }
    for(ll i=0;i<s.size();++i)
        std::cout<<s[i];
    if(s.size()==0)
        std::cout<<0;


    return 0;
}
