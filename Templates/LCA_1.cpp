//https://www.luogu.com.cn/problem/P3379
#include<bits/stdc++.h>
#define int ll
using ll=long long;

void sc(int &a){scanf("%lld",&a);}
void sc(int &a,int &b){scanf("%lld%lld",&a,&b);}
void sc(int &a,int &b,int &c){scanf("%lld%lld%lld",&a,&b,&c);}
void sc(std::string &a){std::cin>>a;}
void pt(int &a){printf("%lld ",a);}
void pt(std::string &a){std::cout<<a;}
void swap(int &a,int &b){int t=a;a=b;b=t;}
void PPP()
{
#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
#endif
}
const int LEN=5e5+7;

struct edge
{
	int to;
	int next;
	int we;
};

edge e[LEN<<1];
int cnt;
int head[LEN];
int n,m,s,x,y;

void add_edge(int from,int to)
{
	e[++cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
	e[cnt].we=1;
}

int fa[LEN][33];
int cost[LEN][33];
int depth[LEN];
void dfs(int father,int now)
{
	fa[now][0]=father;
	depth[now]=depth[father]+1;
	for(int i=1;i<33;++i)
	{
		fa[now][i]=fa[fa[now][i-1]][i-1];
		cost[now][i]=cost[now][i-1]+cost[fa[now][i-1]][i-1];
	}
	for(int i=head[now];i;i=e[i].next)
	{
		if(e[i].to==father)
			continue;
		cost[e[i].to][0]=e[i].we;
		dfs(now,e[i].to);
	}
}

int LCA(int x,int y)
{
	if(depth[x]>depth[y])
		swap(x,y);
	int res=0,t=depth[y]-depth[x];
	for(int i=0;i<33&&t;++i,t>>=1)
	{
		if(t&1)
		{
			res+=cost[y][i];
			y=fa[y][i];
		}
	}
	if(x==y)
		return x;
	for(int i=32;i+1;--i)
	{
		if(fa[x][i]==fa[y][i])
			continue;
		res+=cost[x][i]+cost[y][i];
		x=fa[x][i];
		y=fa[y][i];
	}

	return fa[x][0];
}

void solve()
{
	sc(n,m,s);
	for(int i=0;i<n-1;++i)
	{
		sc(x,y);
		add_edge(x,y);
		add_edge(y,x);
	}
	dfs(0,s);
	while(m--)
	{
		int a,b;
		sc(a,b);
		printf("%lld\n",LCA(a,b));
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
