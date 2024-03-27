//https://codeforces.com/contest/1665/problem/C
#include<bits/stdc++.h>
// #define int ll
 
#pragma GCC optimize(2)
 
void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=2e5+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const double eps=1e-8;
 
int k[LEN];
int end;
bool check(int time)
{
    int t=0;
    int left=0;
    for(int i=0;i<end;++i,++t)
        left+=std::max(0,k[i]-time+t);
 
    return left<=time-end;
}
 
void solve()
{
    memset(k,0,sizeof(k));
    k[0]=1;
    int n,t;
    std::cin>>n;
    for(int i=1;i<n;++i)
    {
        std::cin>>t;
        k[t]++;
    }
 
    std::sort(k,k+n+1,std::greater<int>());//adasdasd
    end=std::lower_bound(k,k+n+1,0,std::greater<int>())-k;
 
    int l=end-1,r=2e5+7,mid;
    int res;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid-1;
            res=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    std::cout<<res<<"\n";
}
 
signed main()
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