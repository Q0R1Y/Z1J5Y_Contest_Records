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
    int k,c1=0,c2=0;
    std::cin>>a>>k;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]=='+')
            c1++;
        else
            c2++;
    }
    if(std::abs(c1-c2)>=k)
        std::cout<<std::abs(c1-c2)-k;
    else if(a.size()&1)
        std::cout<<1;
    else if(k%2==std::abs(c1-c2)%2)
        std::cout<<0;
    else
        std::cout<<1;
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
