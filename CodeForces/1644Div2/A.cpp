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
std::string a;

void solve()
{
    std::cin>>a;
    bool A=false,B=false,C=false,res=true;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]=='r')
            A=true;
        else if(a[i]=='b')
            B=true;
        else if(a[i]=='g')
            C=true;
        else if(a[i]=='R')
        {
            if(!A)
            {
                std::cout<<"NO\n";
                return ;
            }
        }
        else if(a[i]=='B')
        {
            if(!B)
            {
                std::cout<<"NO\n";
                return ;
            }
        }
        else if(a[i]=='G')
        {
            if(!C)
            {
                std::cout<<"NO\n";
                return ;
            }
        }
    }
    std::cout<<"YES\n";

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
