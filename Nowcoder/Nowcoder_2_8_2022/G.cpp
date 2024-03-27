#include<bits/stdc++.h>



using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1000000007;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

int max[LEN][21],min[LEN][21];
int n;

void pre()
{
    for(int j=1;j<=std::__lg(n);++j)
        for(int i=1;i+(1<<j)-1<=n;++i)
            max[i][j]=std::max(max[i][j-1],max[i+(1<<(j-1))][j-1]);
    for(int j=1;j<=std::__lg(n);++j)
        for(int i=1;i+(1<<j)-1<=n;++i)
            min[i][j]=std::min(min[i][j-1],min[i+(1<<(j-1))][j-1]);
}

int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::cin>>n;
    int t;
    for(int i=0;i<n;++i)
    {
        std::cin>>t;
        min[i][0]=max[i][0]=t;
    }
    pre();
    





    return 0;
}
