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
const int LEN=2e5+7;

struct Edge
{
	int to;
	int next;
	int weight;
}edge[LEN];
int head[LEN],cnt,vis[LEN],dis[LEN];
void add_edge(int from,int to,int weight)
{
	edge[++cnt].to=to;
	edge[cnt].weight=weight;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>> q;

void dj(int s)
{
	memset(vis,0,sizeof(vis));
	memset(dis,0x3f,sizeof(dis));
	dis[s]=0;
	q.push({0,s});

	while(q.size())
	{
		auto t=q.top();
		q.pop();
		if(vis[t.second])
			continue;
		vis[t.second]=1;
		for(int i=head[t.second];i;i=edge[i].next)
		{
			if(dis[edge[i].to]>dis[t.second]+edge[i].weight)
				dis[edge[i].to]=dis[t.second]+edge[i].weight;
			if(!vis[edge[i].to])
				q.push({dis[edge[i].to],edge[i].to});
		}
	}
}

void solve()
{
	int n,m,s;
	sc(n,m,s);
	for(int i=0;i<m;++i)
	{
		int u,v,w;
		sc(u,v,w);
		add_edge(u,v,w);
		//add_edge(v,u,w);
	}
	dj(s);
	for(int i=1;i<=n;++i)
		pt(dis[i]);
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
