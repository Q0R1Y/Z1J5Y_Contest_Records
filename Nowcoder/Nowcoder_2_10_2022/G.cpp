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

// int k[LEN];
int res;

int t[14];

void dfs(int level,int now)
{
    if(level==6)
    {
        res++;
        return ;
    }
    for(int i=now;i<=13;++i)
    {
        if(t[i]<4)
        {
            t[i]++;
            dfs(level+1,i);
            t[i]--;
        }
    }
}

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    dfs(0,1);
    std::cout<<res;
    // std::cout<<1716+1287+2*715+3*286+78*2<<"\n";






    return 0;
}
