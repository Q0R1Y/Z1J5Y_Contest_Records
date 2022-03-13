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

    int a,b;
    std::cin>>a>>b;
    if(a==1)
    {
        if(b==2||b==10)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==2)
    {
        if(b==1||b==3)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==3)
    {
        if(b==2||b==4)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==4)
    {
        if(b==3||b==5)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==5)
    {
        if(b==4||b==6)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==6)
    {
        if(b==5||b==7)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==7)
    {
        if(b==6||b==8)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==8)
    {
        if(b==7||b==9)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==9)
    {
        if(b==8||b==10)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    else if(a==2)
    {
        if(b==1||b==9)
            std::cout<<"Yes";
        else
            std::cout<<"No";
    }
    return 0;
}
