#include<bits/stdc++.h>



using ll = long long;
const ll LEN=3e4+7;
const ll MOD=1000000007;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

std::vector<bool> flag(LEN,false);
std::vector<ll> primes;
void Euler()
{
	for (ll i = 2; i <= LEN; ++i)
	{
		if (!flag[i])
			primes.push_back(i);
		for (ll j = 0; j < primes.size() && i * primes[j] < LEN; ++j)
		{
			flag[i * primes[j]] = true;
			if (i % primes[j] == 0)
				break;
		}
	}
}

int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    Euler();
    ll l,r;
    std::cin>>l>>r;
    ll res=-1,temp;
    for(ll i=l;i<=r;++i)
    {
        if(flag[i])
        {
            if(res!=-1)
            {
                temp=std::__gcd(res,i);
                res=res*i/temp%MOD;
            }
            else
                res=i%MOD;
        }
    }
    std::cout<<res;





    return 0;
}
