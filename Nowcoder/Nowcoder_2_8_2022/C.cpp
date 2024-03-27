#include<bits/stdc++.h>



using ll = long long;
const ll LEN=1e5+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;


struct bb
{
    int color;
    int begin;

    bb(int v1=INF,int v2=INF)
    {
        color=v1;
        begin=v2;
    }
};
bool cmp(bb a, bb c)
{
    return a.begin<c.begin;
}
bb k[LEN];
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,t;
    std::cin>>n>>t;
    std::string a;
    std::cin>>a;
    int temp;
    int res=0;
    for(int i=0;i<n;++i)
    {
        std::cin>>temp;
        k[i]=bb((a[i]=='B')?1:0,temp);
    }

    std::sort(k,k+n,cmp);
    std::priority_queue<int> r,b;
    for(int i=0,time=1;time<=k[n-1].begin+t;++time)
    {
        while(!r.empty()&&time-r.top()>=t)
            r.pop();
        while(!b.empty()&&time-b.top()>=t)
            b.pop();
        while(i<n&&k[i].begin==time)
        {
            if(k[i].color)
                b.push(time);
            else
                r.push(time);
            ++i;
        }
        if(!b.empty()&&r.empty())
            res++;
    }
    std::cout<<res;





    return 0;
}
