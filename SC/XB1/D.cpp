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
const ll LEN=1e9+7;
const ll MOD=1e9+7;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

std::priority_queue<ll,std::vector<ll>,std::less<ll>> l;
std::priority_queue<ll,std::vector<ll>,std::greater<ll>> r;
ll lsum=0,rsum=0;
signed main()
{
    // PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n,t;
    std::cin>>n;
    
    for(int i=1;i<=n;++i)
    {
        std::cin>>t;
        t-=i;
        if(l.empty())
        {
            l.emplace(t);
            lsum=(lsum+t);
        }
        else if(t>l.top())
        {
            r.emplace(t);
            rsum=(rsum+t);
        }
        else
        {
            l.emplace(t);
            lsum=(lsum+t);
        }
        while(std::fabs(l.size()-r.size())>1)
        {
            if(l.size()>r.size())
            {
                r.emplace(l.top());
                lsum=(lsum-l.top());
                rsum=(rsum+l.top());
                l.pop();
            }
            else
            {
                l.emplace(r.top());
                rsum=(rsum-r.top());
                lsum=(lsum+r.top());
                r.pop();
            }
        }
        if(i&1)
        {
            t=(rsum-lsum);
            t+=l.size()>r.size()?l.top():-r.top();
            std::cout<<t%MOD<<" ";
        }
        else
        {
            std::cout<<(rsum-lsum)%MOD<<" ";
        }
    }




    return 0;
}
