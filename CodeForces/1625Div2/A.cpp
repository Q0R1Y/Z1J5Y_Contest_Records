#include <bits/stdc++.h>
 
using ll = long long;
using ull = unsigned long long;
using namespace std;
const ll LEN=3e1+7;
const int INF=1e8;
 
int cnt[LEN];
// int res[LEN];
 
void solve()
{
    memset(cnt,0,sizeof(cnt));
    // memset(res,0,sizeof(res));
    int n,l;
    cin>>n>>l;
    ll t;
    for(int i=0;i<n;++i)
    {
        cin>>t;
        int k=0;
        while(t)
        {
            cnt[k++]+=(t&1);
            t>>=1;
        }
    }
    ll ans=0,temp=1;
    for(int i=0;i<=l;++i,temp*=2)
    {
        if(cnt[i]>n/2)
        {
            // res[i]=1;
            ans+=temp;
        }
    }
    cout<<ans<<"\n";
 
 
}
 
 
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
 
    int T;
    cin>>T;
    while(T--)
        solve();
 
 
 
    return 0;
}