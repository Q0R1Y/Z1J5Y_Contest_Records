#include<bits/stdc++.h>



using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int main()
{
    // freopen("in","r",stdin);
    // freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    ll x;
    std::cin>>x;
    ll res=x,cnt=0,tx=x;
    while(tx)
    {
        res<<=1;
        tx>>=1;
    }
    x|=res;

    std::cout<<x;






    return 0;
}
