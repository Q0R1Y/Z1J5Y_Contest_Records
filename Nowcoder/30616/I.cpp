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

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::string a,res;
    std::cin>>a;
    for(int length=1;length<=a.size();++length)
    {
        for(int begin=0;begin<a.size();++begin)
        {
            // std::cout<<res<<" "<<begin<<"\n";
            if(a.substr(begin,length)>res)
                res=a.substr(begin,length);
        }
    }
    std::cout<<res;



    return 0;
}
