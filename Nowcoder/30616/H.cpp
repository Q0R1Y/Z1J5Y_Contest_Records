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

std::map<ll,ll> sum;
std::vector<std::vector<ll>> in(32,std::vector<ll>(LEN));
bool flag[LEN];
void solve()
{
    sum.clear();
    memset(flag,0,sizeof(flag));
    for(ll i=0;i<31;++i)
        in[i].clear();
    ll n,t;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        in[t].push_back(i);
        sum[t]++;
    }
    for(ll i=0;i<30;++i)
        sum[i+1]+=sum[i]/2;
    if(!sum[30])
    {
        std::cout<<"impossible\n";
        return ;
    }

    ll l=30,size=1;
    bool res=false;
    for(ll i=30;i>=0;--i)
    {
        while(!in[i].empty())
        {
            flag[in[i].back()]=1;
            in[i].pop_back();
            size--;
            if(size==0)
            {
                res=true;
                break;
            }
        }
        if(res)
            break;
        else
            size*=2;
    }
    for(ll i=0;i<n;++i)
        std::cout<<flag[i];
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
