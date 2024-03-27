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

void solve()
{
    std::string a;
    int n;
    std::cin>>n;
    std::cin>>a;
    int w=0,b=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]=='w') w++;
        else b++;
    }
    for(int i=n-1;a[i]!='w';--i)
        b--;
    if(w&1)
    {
        if(b&1)
        {
            std::cout<<"No\n";
            return ;
        }
        else
        {
            std::cout<<"Yes\n";
            return ;
        }
    }
    else
    {
        if(w/2%2)
        {
            std::cout<<"Yes\n";
            return ;
        }
        else
        {
            std::cout<<"No\n";
            return ;
        }
    }


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
