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

ll k[]
{
1,
2,
6,
24,
120,
720,
5040,
40320,
362880,
3628800,
39916800,
479001600,
6227020800,
87178291200,
1307674368000
};
ll min;
void dfs(ll now,ll cal,ll level)
{
    ll p=0;
    ll t=now;
    while(now)
    {
        if(now&1)
            p++;
        now>>=1;
    }
    now=t;
    min=std::min(min,level+p);
    for(int i=cal+1;now>=k[i];++i)
        dfs(now-k[i],i,level+1);
}

void solve()
{
    ll n;
    std::cin>>n;
    min=INF;   

    dfs(n,-1,0);
    std::cout<<min<<"\n";
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
