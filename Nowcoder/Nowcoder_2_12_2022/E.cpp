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

struct kkk
{
    int a;
    int b;
    int h;
    kkk(int v1,int v2,int v3)
    {
        a=v1;
        b=v2;
        h=v3;
    }
};
bool cmp1(kkk v1,kkk v2)
{
    return v1.a<v2.a;
}

kkk k[LEN];

void solve()
{
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i)
        std::cin>>k[i].a>>k[i].b>>k[i].h;
    std::sort(k,k+n,cmp1);
    int res=0;
    for(int i=0;i<n-1;++i)
        if(k[n-1].a>k[i].h+k[i].b)
            res+=k[n-1].a-(k[i].h+k[i].b);

    if(k[n-1].b+k[n-1].h<k[n-2].a)
        res+=k[n-2].a-(k[n-1].b+k[n-1].h);
    std::cout<<res<<"\n";

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
