//https://www.luogu.com.cn/problem/P2580
#include<bits/stdc++.h>

#define int ll
using ll=long long;

const ll LEN=2e6+7;
void sc(int &a)
{
	scanf("%lld",&a);
}
void sc(int &a,int &b)
{
	scanf("%lld%lld",&a,&b);
}
void sc(int &a,int &b,int &c)
{
	scanf("%lld%lld%lld",&a,&b,&c);
}
void pt(int &a)
{
	printf("%lld",a);
}
void PPP()
{
#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
#endif
}

struct Trie
{
	int tr[LEN][26];
	bool ex[LEN];
	int cnt;
	void insert(std::string &a)
	{
		int t=0;
		for(int i=0;i<a.size();++i)
		{
			if(!tr[t][a[i]-'a'])
			{
				tr[t][a[i]-'a']=++cnt;
			}
			t=tr[t][a[i]-'a'];
		}
		ex[t]=true;
	}
	bool find(std::string &a)
	{
		int t=0;
		for(int i=0;i<a.size();++i)
		{
			if(!tr[t][a[i]-'a'])
				return false;
			t=tr[t][a[i]-'a'];
		}
		return ex[t];
	}
};

Trie TRIE;
std::map<std::string,bool> ju;

void solve()
{
	std::string str;
	int n;
	sc(n);
	while(n--)
	{
		std::cin>>str;
		TRIE.insert(str);
	}
	int m;
	sc(m);
	while(m--)
	{
		std::cin>>str;
		if(TRIE.find(str))
		{
			if(ju[str])
			{
				printf("REPEAT\n");
			}
			else
			{
				printf("OK\n");
				ju[str]=true;
			}
		}
		else
		{
			printf("WRONG\n");
		}
	}
}


signed main()
{
	int T=1;
//	sc(T);
	while(T--)
	{
		solve();
	}


	return 0;
}
