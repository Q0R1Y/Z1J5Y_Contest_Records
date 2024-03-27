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

const int LEN=2e5+7;

int tree[LEN<<2],mark[LEN<<2];
int a[LEN];

void build(int l,int r,int now,int arr[])
{
	if(l==r)
	{
		tree[now]=arr[l];
		return ;
	}
	int mid=(l+r)/2;
	build(l,mid,now*2,arr);
	build(mid+1,r,now*2+1,arr);
	tree[now]=tree[now*2]+tree[now*2+1];
}

void push_down(int now,int len)
{
	mark[now*2]+=mark[now];
	mark[now*2+1]+=mark[now];
	tree[now*2]+=(len-len/2)*mark[now];
	tree[now*2+1]+=(len/2)*mark[now];
	mark[now]=0;
}

void update(int l,int r,int d,int cl,int cr,int now)
{
	if(l>cr||r<cl)
		return ;
	if(l<=cl&&r>=cr)
	{
		tree[now]+=(cr-cl+1)*d;
		if(cl!=cr)
			mark[now]+=d;
		return ;
	}
	int mid=(cl+cr)/2;
	push_down(now,cr-cl+1);
	update(l,r,d,cl,mid,now*2);
	update(l,r,d,mid+1,cr,now*2+1);
	tree[now]=tree[now*2]+tree[now*2+1];
}

int query(int l,int r,int cl,int cr,int now)
{
	if(r<cl||l>cr)
		return 0;
	if(r>=cr&&l<=cl)
		return tree[now];
	int mid=(cl+cr)/2;
	push_down(now,cr-cl+1);
	return query(l,r,cl,mid,now*2)+query(l,r,mid+1,cr,now*2+1);
}


void solve()
{
	int n,m;
	std::cin>>n>>m;
	for(int i=1;i<=n;++i) std::cin>>a[i];
	build(1,n,1,a);
	while(m--)
	{
		int op,x,y,k;
		std::cin>>op;
		if(op==1)
		{
			std::cin>>x>>y>>k;
			update(x,y,k,1,n,1);
		}
		else
		{
			std::cin>>x>>y;
			std::cout<<query(x,y,1,n,1)<<"\n";
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
