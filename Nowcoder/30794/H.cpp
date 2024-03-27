#include<bits/stdc++.h>
#define int ll

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
char a[1010];
ll num[27];
signed main()
{
    PPP();

    // std::cin.tie(0);
    // std::cout.tie(0);
    // std::ios_base::sync_with_stdio(0);

    while(~scanf("%s",a))
    {
        for(int i=0;a[i];++i)
            num[a[i]-'a'+1]++;
    }
    ll maxi,max=0;
    for(ll i=1;i<27;++i)
    {
        if(num[i]>max)
        {
            max=num[i];
            maxi=i;
        }
    }
    std::cout<<char(maxi+'a'-1);




    return 0;
}
