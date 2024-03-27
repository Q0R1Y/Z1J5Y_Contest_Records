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

ll k[LEN];

void solve()
{
    ll n;
    std::cin>>n;
    ll pre=0;
    for(int i=1;i<=n;++i)
    {
        std::cin>>k[i];
        pre+=k[i];
    }
        
    std::sort(k+1,k+1+n);
    if(k[n]==0)
    {
        std::cout<<0<<"\n";
        return ;
    }
    if(k[n]==k[n-1])
    {
        std::cout<<1<<"\n";
        return; 
    }
    pre=pre-2*k[n];
    if(pre<0)
    {
        std::cout<<-pre<<"\n";
        return ;
    }
    else
    {
        std::cout<<1<<"\n";
        return ;
    }

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
