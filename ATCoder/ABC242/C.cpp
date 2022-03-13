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

ll qp(ll a,ll b,ll m)
{
    ll res=m,n=a;
    while(b)
    {
        if(b&1)
            res=res*n%MOD;
        b>>=1;
        n=n*n%MOD;
    }
    return res;
}

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll n;
    std::cin>>n;
    
    ll res=qp(3LL,n-1,7LL)+qp(2LL,n-1,2LL);
    res%=MOD;
    std::cout<<res;

    return 0;
}
