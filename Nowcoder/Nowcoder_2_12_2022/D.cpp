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
    int n,m;
    std::cin>>n>>m;
    std::string a,b;
    std::cin>>a>>b;
    std::map<char,std::deque<int>> k;
    int res=0;
    
    for(int i=0;i<a.size();++i)
    {
        if(a[i]==*b.rbegin())
        {

        }
        k[a[i]].push_back(i);
        
    }
    
    
    
    std::cout<<res<<"\n";
}

int main()
{
//     PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    int T;
    std::cin>>T;
    while(T--)
        solve();




    return 0;
}
