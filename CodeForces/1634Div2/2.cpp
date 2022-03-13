#include<bits/stdc++.h>


using ll = long long;
const ll LEN=1e5+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int k[LEN];

void solve()
{
	int n,x,y;
	std::cin>>n;
	std::cin>>x>>y;
	int j=0;
	for(int i=0;i<n;++i)
	{
		std::cin>>k[i];
		if(k[i]&1) j++;
	}
	if(j&1)
	{
		if((x&1)&&(y&1))
		{
			std::cout<<"Alice\n";
		}
		else
		{
			std::cout<<"Bob\n";
		}
	}
	else
	{
		if((x&1)&&(y&1))
		{
			std::cout<<"Bob\n";
		}
		else
		{
			std::cout<<"Alice\n";
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


	int T;
	std::cin>>T;
	while(T--)
	{
		solve();
	}





	return 0;
}
