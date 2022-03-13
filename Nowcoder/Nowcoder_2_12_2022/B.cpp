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
const ll MOD=998244353;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

ll k[LEN];
ll res;
void p(ll a,ll t)
{
    ll r=1;
    ll k=2;
    while(a)
    {
        if(a&1)
            r=r*k%MOD;
        a>>=1;
        k=k*k%MOD;
    }
    res=res*(r-t)%MOD;
}

void solve()
{
    ll n;
    std::cin>>n;
    res=1;
    ll cnt=1;
    for(ll i=1;i<=n;++i)
        std::cin>>k[i];

    for(ll i=1;i<=n;++i)
    {
        if(k[i]==k[i-1])
            ++cnt;
        else 
        {
            if(i>1&&i+1<=n&&((k[i]>k[i-cnt]&&k[i+1]>k[i])||k[i]<k[i-cnt]&&k[i+1]<k[i]))
                p(cnt,0);
            else
                p(cnt,1);
            cnt=1;
        }
    }   
    std::cout<<res<<"\n";



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
