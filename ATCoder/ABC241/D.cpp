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
std::multiset<ll> set;

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    set.clear();
    ll q,op,x,k;
    std::cin>>q;
    for(int i=0;i<q;++i)
    {
        std::cin>>op;
        if(op==1)
        {
            std::cin>>x;
            set.emplace(x);
        }
        else if(op==2)
        {
            std::cin>>x>>k;
            auto it=set.upper_bound(x);
            
            ll res=-1;
            while(1)
            {
                if(k==0)
                {
                    res=*it;
                    break;
                }
                if(it==set.begin())
                    break;
                it--;
                k--;
            }
            
            std::cout<<res<<"\n";
        }
        else if(op==3)
        {
            std::cin>>x>>k;
            auto it=set.lower_bound(x);
            ll res=-1;
            --k;
            while(1)
            {
                if(it==set.end())
                    break;
                if(k==0)
                {
                    res=*it;
                    break;
                }
                it++;
                --k;
            }
            std::cout<<res<<"\n";
        }
    }






    return 0;
}
