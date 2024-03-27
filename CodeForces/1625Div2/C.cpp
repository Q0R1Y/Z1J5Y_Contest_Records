#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;
const ll LEN=5e2+7;
const int INF=1e8;


int times[LEN];
int co[LEN];

void solve()
{
    // memset(cnt,0,sizeof(cnt));
    int n,l,k;
    cin>>n>>l>>k;
    for(int i=1;i<=n;++i)
        cin>>co[i];
    co[n+1]=l;
    int t;
    for(int i=1;i<=n;++i)
    {
        cin>>t;
        times[i]=t*(co[i+1]-co[i]);
    }
    for(int i=1;i<=n;++i)
    {
        // for(int j=)
    }




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
