#include<bits/stdc++.h>



void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e8+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;
// bool flag[LEN];
// std::vector<ll> primes;
// void Euler()
// {
// 	for (ll i = 2; i <= LEN; ++i)
// 	{
// 		if (!flag[i])
// 			primes.push_back(i);
// 		for (ll j = 0; j < primes.size() && i * primes[j] < LEN; ++j)
// 		{
// 			flag[i * primes[j]] = true;
// 			if (i % primes[j] == 0)
// 				break;
// 		}
// 	}
// }
int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);
    // Euler();
    ll n;
    std::cin>>n;
    // for(ll i=0;i<10000;++i)
    // {
    //     if(primes[i+1]==primes[i]+2)
    //         std::cout<<primes[i]<<" "<<primes[i+1]<<" "<<(primes[i+1]+primes[i])%12<<"\n";
    // }
    if(n==1)
    {
        std::cout<<8;
    }
    else
        std::cout<<0;

    return 0;
}
