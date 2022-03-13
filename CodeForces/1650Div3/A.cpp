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

// ll k[LEN];
std::string a;
void solve()
{
    char c;
    bool flag=false;
    std::cin>>a>>c;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]==c&&i%2==0)
        {
            flag=true;
        }
    }
    if(flag)
    {
        std::cout<<"YES\n";
    }
    else
    {
        std::cout<<"NO\n";
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
