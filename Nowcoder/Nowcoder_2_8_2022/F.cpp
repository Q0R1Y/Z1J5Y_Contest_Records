#include<bits/stdc++.h>



using ll = long long;
const ll LEN=1e6+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

// int k[LEN];
// std::string res;

void out(int hight,char a)
{
    int o,f;
    if(a=='A')
        o=6;
    else if(a=='B')
        o=7;
    else
        o=a-'C'+1;
    std::cout<<o;
    if(hight<0) f=-1;
    else f=1;
    for(int i=0;i<std::abs(hight);++i)
        std::cout<<((f==1)?'*':'.');
}

int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    std::string a;
    std::cin>>a;
    
    int hight=0;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]=='<')
            hight--;
        else if(a[i]=='>')
            hight++;
        else
            out(hight,a[i]);
    }





    return 0;
}
