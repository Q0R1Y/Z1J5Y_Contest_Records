#include<bits/stdc++.h>
#define int ll
using ll=long long;

const ll LEN=1e6+7;
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

struct data
{
    int w;
    int next;
    int to;
}edge[LEN];

int edge_cnt=0;
int head[LEN];
void add_edge(int from,int to,int w)
{
    edge[++edge_cnt].to=to;
    edge[edge_cnt].next=head[from];
    edge[edge_cnt].w=w;
    head[from]=edge_cnt;
}

bool visit[LEN];

void BFS(int n)
{
    std::deque<int> qu;

    qu.push_back(n);
    memset(visit,0,sizeof(visit));

    while(qu.size())
    {
        int p=qu[0];
        printf("%lld ",p);
        qu.pop_front();
        for(int i=head[p];i;i=edge[i].next)
        {
            if(!visit[edge[i].to])
            {
                visit[edge[i].to]=true;
                qu.push_back(edge[i].to);
            }
        }
    }
}

void DFS(int n)
{
    printf("%lld ",n);
    visit[n]=true;
    for(int i=head[n];i;i=edge[i].next)
    {
        if(!visit[edge[i].to])
        {
            DFS(edge[i].to);
        }
    }
}

int dis[LEN];
int n,m;
void DJ(int begin)
{
    memset(dis,0x3f,sizeof(dis));
    memset(visit,0,sizeof(visit));
    for(int i=1;i<=n;++i)
        dis[i]=(1ll<<31)-1ll;
    dis[begin]=0;

    for(int i=0;i<n;++i)
    {
        int t1,min=0x3f3f3f3f;
        for(int j=1;j<=n;++j)
        {
           if(!visit[j]&&dis[j]<min)
           {
               t1=j;
               min=dis[j];
           }
        }
        visit[t1]=true;
        for(int j=head[t1];j;j=edge[j].next)
        {
            if(!visit[edge[j].to]&&dis[edge[j].to]>edge[j].w+dis[t1])
            {
                dis[edge[j].to]=edge[j].w+dis[t1];
            }
        }
    }
}

void solve()
{
    int s;
    sc(n,m,s);
    int x,y,w;
    for(int i=0;i<m;++i)
    {
        sc(x,y,w);
        add_edge(x,y,w);
    }
    memset(visit,0,sizeof(visit));
    DJ(s);
    for(int i=1;i<=n;++i)
        printf("%lld ",dis[i]);
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
