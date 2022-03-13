#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}

using ll = long long;
const ll LEN=5e2+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int k[LEN],t[LEN];

void solve()
{
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
        std::cin>>k[i];
        t[i]=k[i];
    }
    std::sort(t,t+n);
    int f=0,tag=-1;
    for(int i=0;i<n;++i)
    {
        if(k[i]==t[f])
        {
            if(i==f)
                f++;
            else
            {
                tag=i;
                break;
            }
        }
    }
    if(tag==-1)
    {
        for(int i=0;i<n;++i)
            std::cout<<k[i]<<" ";
    }
    else
    {
        for(int i=0;i<f;++i)
            std::cout<<k[i]<<" ";
        for(int i=tag;i>=f;--i)
            std::cout<<k[i]<<" ";
        for(int i=tag+1;i<n;++i)
            std::cout<<k[i]<<" ";
    }
    
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
