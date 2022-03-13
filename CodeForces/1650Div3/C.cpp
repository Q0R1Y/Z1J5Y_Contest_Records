#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;



struct node
{
    ll x,v,num;
    node(ll a=0,ll b=0,ll c=0):x(a),v(b),num(c)
    {}
};

bool cmp1(node a,node b)
{
    return a.x<b.x;
}
bool cmp2(node a,node b)
{
    return a.v<b.v;
}
node k[LEN];
void solve()
{
    ll n,m;
    std::cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        k[i].num=i;
        std::cin>>k[i].x>>k[i].v;
    }
        
    std::sort(k+1,k+m+1,cmp2);
    std::vector<node> ans(k+1,k+2*n+1);
    std::sort(ans.begin(),ans.end(),cmp1);
    ll res=0;
    for(int i=0;i<ans.size();++i)
        res+=ans[i].v;
    std::cout<<res<<"\n";
    for(int i=0;i<n;++i)
        std::cout<<ans[i].num<<" "<<ans[2*n-i-1].num<<"\n";
    std::cout<<"\n";
}

int main()
{
    PPP();
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
