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
ll a,b,c;
bool judge(double mid)
{
    if(a==2&&mid>1e5)
        return false;
    if(a==3&&mid>1e4)
        return false;
    return (pow(mid,a)+b*(std::log(mid)))<c;
}

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    
    std::cin>>a>>b>>c;
    double l=1e-7,r=1e9+7,mid;
    while(r-l>=1e-7)
    {
        mid=(l+r)/2;
        if(judge(mid))
        {
            l=mid+1e-7;
        }
        else
        {
            r=mid-1e-7;
        }
    }
    // std::cout<<mid<<" "<<l<<"\n";
    printf("%.7lf",l);


    return 0;
}
