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

ll calc(std::string &a,std::string &b)
{
    for(ll i=0;i<a.size();++i)
    {
        bool flag=true;
        for(ll j=0;j<b.size()&&i+j<a.size();++j)
        {
            if(!(a[i+j]==b[j]||a[i+j]=='?'||b[j]=='?'))
            {
                flag=false;
                break;
            }
        }
        if(flag)
            return ll(a.size()+i);
    }
    return ll(a.size()+b.size());
}

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::string a,b;
    std::cin>>a>>b;
    // ll t1=calc(a,b);
    // ll t2=calc(b,a);
    ll res=std::min({ll(a.size()+b.size()),calc(a,b),calc(b,a)});
    std::cout<<res;
    return 0;
}
