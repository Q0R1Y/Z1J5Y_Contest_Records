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
    ll pre=1,last=n;
    for(int i=1;i<=n;++i)
        std::cin>>k[i];
    for(pre=1;k[pre+1]==k[pre];++pre);
    for(last=n;k[last-1]==k[last];--last);
    last=n-last;
    std::cout<<std::max(n-last-pre,0LL)<<"\n";
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
