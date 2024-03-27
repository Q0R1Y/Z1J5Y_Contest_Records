#include<bits/stdc++.h>
#define int ll
using ll=long long;

void sc(int &a){scanf("%lld",&a);}
void sc(int &a,int &b){scanf("%lld%lld",&a,&b);}
void sc(int &a,int &b,int &c){scanf("%lld%lld%lld",&a,&b,&c);}
void sc(std::string &a){std::cin>>a;}
void pt(int &a){printf("%lld ",a);}
void pt(std::string &a){std::cout<<a;}
void PPP()
{
#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
#endif
}
const int LEN=1e4+7;
int color[LEN];
std::vector<std::vector<int>> g(LEN);

int cnt[3];

bool DFS(int now,int co)
{
	color[now]=co;
	cnt[co]++;
	bool flag=true;
	for(int i=0;i<g[now].size();++i)
	{
		if(!color[g[now][i]])
			flag=flag&&DFS(g[now][i],3-co);
		else if(color[g[now][i]]==co)
			return false;
	}
	return flag;
}

void solve()
{
	int n,m;
	sc(n,m);
	for(int i=0;i<m;++i)
	{
		int u,v;
		sc(u,v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		cnt[1]=cnt[2]=0;
		if(color[i]==0&&!DFS(i,1))
		{
			printf("Impossible\n");
			return ;
		}
		ans+=std::min(cnt[1],cnt[2]);
	}
	printf("%lld\n",ans);
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
