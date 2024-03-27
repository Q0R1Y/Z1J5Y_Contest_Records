#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e5+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int k[LEN];
void solve()
{
    int n;
    std::cin>>n;
    
    for(int i=0;i<n;++i)
        std::cin>>k[i];
    std::map<int,int> max;
    for(int i=0;i<n;++i)
    {
        if(max.empty())
            max.emplace(k[i],1);
        else
        {
            auto it=max.lower_bound(k[i]);
            if(it!=max.end())
            {
                ++it;
                for(;it!=max.end();++it)
                    it->second=0;
            }
            else
                max.emplace(k[i],1);
        }
    }
    int cnt=0;
    for(auto it=max.begin();it!=max.end();++it)
        if(it->second!=0)
            cnt++;
    std::cout<<cnt<<"\n";
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
