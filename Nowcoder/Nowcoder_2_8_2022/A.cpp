#include<bits/stdc++.h>



using ll = long long;
const ll LEN=2e5+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;


ll t[LEN];

int main()
{
//     freopen("in","r",stdin);
//     freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::string a;
    ll n,k;
    std::cin>>n>>k;
    std::cin>>a;
    a=" "+a;
    for(int i=1;i<=n;++i)
    {
        if(a[i]=='R')
        {
            if(t[i-1]==-1)
                t[i]=1;
            else
                t[i]=t[i-1]+1;
        }
        else if(a[i]=='P')
            t[i]=-1;
        else
        {
            if(t[i-1]==-1)
                t[i]=0;
            else
                t[i]=t[i-1];
        }
    }
    ll flag=0;
    ll res=0;
    for(int i=1;i<=n;++i)
    {
        if(t[i]>=k)
        {
            int l=std::upper_bound(t+flag,t+i+1,t[i]-k)-t;
            res+=l-flag;
        }
        else if(t[i]==-1)
            flag=i;
    }
    std::cout<<res;




    return 0;
}
