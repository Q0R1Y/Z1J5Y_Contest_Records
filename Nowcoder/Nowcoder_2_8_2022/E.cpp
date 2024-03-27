#include<bits/stdc++.h>



using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-4;

// int k[LEN];

long long f(long long x)
{
    if(x==1)return 1;
    return f(x/2)+f(x/2+x%2);
}
int main()
{
    // freopen("in","r",stdin);
    // freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll x;
    std::cin>>x;
    std::cout<<x;
    





    return 0;
}
