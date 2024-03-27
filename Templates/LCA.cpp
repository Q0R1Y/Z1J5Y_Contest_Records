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
const int LEN=4e4+7;
std::vector<std::vector<int>> tr(LEN);
std::vector<std::vector<int>> we(LEN);

int depth[LEN];        	//depth of i
int fa[LEN][33];	   	//(2^(i-1))th father of i
int cost[LEN][33];    	//cost to fa[i][j]

void dfs(int father,int now)
{
	fa[now][0]=father;
	depth[now]=depth[father]+1;
	for(int i=1;i<32;++i)
	{
		fa[now][i]=fa[fa[now][i-1]][i-1];
		cost[now][i]=cost[now][i-1]+cost[fa[now][i-1]][i-1];
	}
	// continue to DFS
	for(int i=0;i<tr[now].size();++i)
	{
		if(tr[now][i]==father)
			continue;
		cost[tr[now][i]][0]=we[now][i];
		dfs(now,tr[now][i]);
	}
}
int lca(int a,int b)
{
	int x,y;
	if(depth[a]<depth[b])
		x=a,y=b;
	else
		x=b,y=a;
	int t=depth[y]-depth[x];
	int res=0;
	for(int i=0;i<33&&t;++i,t>>=1)
	{
		if(t&1)
		{
			res+=cost[y][i];
			y=fa[y][i];
		}
	}
	if(x==y)
		return res;
	for(int i=32;i&&x!=y;--i)
	{
		if(fa[x][i]==fa[y][i])
			continue;
		res+=cost[x][i]+cost[y][i];
		x=fa[x][i];
		y=fa[y][i];
	}
	return res+cost[x][0]+cost[y][0];
}
void solve()
{
	int n,m;
	sc(n,m);
	for(int i=1;i<n;++i)
	{
		int u,v,w;
		sc(u,v,w);
		tr[u].push_back(v);
		tr[v].push_back(u);
		we[u].push_back(w);
		we[v].push_back(w);
	}
	dfs(0,1);
	while(m--)
	{
		int a,b;
		sc(a,b);
		printf("%lld\n",lca(a,b));
	}
}


signed main()
{
	int T=1;
	sc(T);
	while(T--)
	{
		solve();
	}


	return 0;
}
