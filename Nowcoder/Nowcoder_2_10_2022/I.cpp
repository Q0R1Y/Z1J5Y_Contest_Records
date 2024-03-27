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
std::map<int,int> map;
ll res[LEN];
int h[LEN],hh[LEN];

int main()
{
//     PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,q;
    std::cin>>n>>q;
    for(int i=1;i<=n;++i)
        std::cin>>k[i];
    for(int i=2;i<=n;++i)
        map[k[i]-k[i-1]]++;
    int i=1;
    
    for(auto it=map.begin();it!=map.end();++it)
    {
        res[i]=res[i-1]+ll(it->first)*ll(it->second);
        h[i]=it->first;
        hh[i]=it->second+hh[i-1];
        ++i;
    }

    int kk,pp;
    while(q--)
    {
        std::cin>>kk>>pp;
        int pos=std::lower_bound(h,h+i,kk)-h;
        if(h[pos]>kk) pos--;
        if(res[i-1]-res[pos]-(hh[i-1]-hh[pos])*kk>=pp)
            std::cout<<"Yes\n";
        else
            std::cout<<"No\n";
    }


    return 0;
}
