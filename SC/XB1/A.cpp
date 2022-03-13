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

// ll k[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


	ll a,b,c,l,r;
	std::cin>>a>>b>>l>>r;
	c=a*b/std::__gcd(a,b);
	std::cout<<r/a+r/b-r/c-((l-1)/a+(l-1)/b-(l-1)/c);





    return 0;
}
