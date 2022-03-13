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

int k[LEN];

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int k;
    std::string A,B;
    std::cin>>k;
    std::cin>>A;
    std::cin>>B;
    std::string res;
    std::reverse(A.begin(),A.end());
    std::reverse(B.begin(),B.end());
    A.append(A.size()>B.size()?A.size():B.size(),'0');
    B.append(A.size()>B.size()?A.size():B.size(),'0');
    for(int i=0;i<A.size();++i)
        res+=A[i]-'0'+B[i];
    res+="0";
    for(int i=0;i<res.size()-1;++i)
    {
        res[i+1]+=(res[i]-'0')/k;
        res[i]=(res[i]-'0')%k+'0';
    }
    std::reverse(res.begin(),res.end());
    int i;
    for(i=0;res[i]=='0';++i);
    res=res.substr(i);
    std::cout<<res;


    return 0;
}
