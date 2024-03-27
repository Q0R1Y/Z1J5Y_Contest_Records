#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=5e3+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k[LEN],pre[LEN],res[LEN];

void solve()
{
    ll n,x;
    std::cin>>n>>x;
    for(int i=1;i<=n;++i)
        res[i]=-INF;
    for(int i=1;i<=n;++i)
    {
        std::cin>>k[i];
        pre[i]=k[i]+pre[i-1];
    }
    ll max=-INF;
    for(int i=1;i<=n;++i)
    {
        for(int j=i;j<=n;++j)
        {
            res[j-i+1]=std::max(res[j-i+1],pre[j]-pre[i-1]);
            if(res[j-i+1]>max)
                max=res[j-i+1];
        }
    }
    max=std::max(0ll,max);
    std::cout<<max<<" ";
    for(int i=1;i<=n;++i)
    {
        for(int j=i;j<=n;++j)
        {
            res[j]+=x;
            if(res[j]>max)
                max=res[j];
        }
        std::cout<<max<<" "; 
    }
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
