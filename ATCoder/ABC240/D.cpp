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

int k[LEN];
std::vector<std::pair<int,int>> p;

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,t,pre,cnt;
    std::cin>>n;

    for(int i=0;i<n;++i)
        std::cin>>k[i];
    int res=0;
    for(int i=0;i<n;++i)
    {
        res++;
        if(p.empty()||p.back().first!=k[i])
            p.push_back(std::make_pair(k[i],1));
        else
        {
            p.back().second++;
            if(p.back().second==p.back().first)
            {
                res-=p.back().first;
                p.pop_back();
            }
        }
        std::cout<<res<<"\n";
    }




    return 0;
}
