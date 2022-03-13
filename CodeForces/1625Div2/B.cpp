#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;
const ll LEN=2e5+7;
const int INF=1e8;

bool flag[LEN];
int k[LEN];
int dis[LEN];

void solve()
{
    // memset(cnt,0,sizeof(cnt));
    memset(flag,0,sizeof(flag));
    memset(dis,0,sizeof(dis));
    int n,t;
    cin>>n;
    int mn=INF;
    for(int i=1;i<=n;++i)
    {
        cin>>t;
        if(flag[t])
        {
            if(mn>i-k[t])
                mn=i-k[t];
        }
        flag[t]=true;
        k[t]=i;
    }
    // int mx=-1;
    if(mn==INF)
        mn=-1;
    else mn=n-mn;
    cout<<mn<<"\n";


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