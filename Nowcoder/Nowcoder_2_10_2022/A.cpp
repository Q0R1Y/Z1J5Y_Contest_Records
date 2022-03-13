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

int t[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::string a;
    int days=0;
    int n;
    std::cin>>n;
    std::cin>>a;
    ll k,w,q;
    std::cin>>k>>w>>q;
    for(int i=0;i<n;++i)
        if(a[i]=='0')
            t[days++]=i;
    ll max=0;
    for(int i=1;i<days;++i)
    {
        int t1=std::lower_bound(t,t+i,t[i]-k)-t,t3=std::lower_bound(t+i,t+days,t[i]+k)-t;
        ll p1=std::llabs(t[i]-k-t[t1]),p3=std::llabs(t[i]+k-t[t3]);
        if(t1==i)
            p1=std::llabs(t[i]-k-t[t1-1]);
        if(t3==days)
            p3=std::llabs(t[i]+k-t[t3-1]);
        if(t1!=0)
            p1=std::min(p1,std::llabs(t[i]-k-t[t1-1]));
        if(t3-1!=i)
            p3=std::min(p3,std::llabs(t[i]+k-t[t3-1]));

        max=std::max({max,w-p1*q,w-p1*q+w-p3*q });

    }
    std::cout<<max;


    return 0;
}
