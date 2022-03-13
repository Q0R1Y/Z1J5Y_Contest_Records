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

// int k[LEN];
double xx,yy,xx0,yy0;
double xxt,yyt;
double min;
double dis(double xx1,double yy1,double xx2,double yy2)
{
    return sqrt((xx1-xx2)*(xx1-xx2)+(yy1-yy2)*(yy1-yy2));
}

void cal()
{
    double a=dis(xx,yy,xx0,yy0),b=dis(xx,yy,xx0+xxt,yy0+yyt),c=dis(xx0,yy0,xx0+xxt,yy0+yyt);
    if(a*a+c*c<b*b||c*c+b*b<a*a)
        min=std::min({min,a,b});
    else
    {
        double p=(a+b+c)/2;
        double s=sqrt((p-a)*(p-b)*(p-c)*p)*2;
        min=std::min(s/c,min);
    }
        
}

int main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    
    std::cin>>n;
    std::cin>>xx0>>yy0>>xx>>yy;
    min=dis(xx0,yy0,xx,yy);
    for(int i=0;i<n;++i)
    {
        std::cin>>xxt>>yyt;
        cal();
        xx0+=xxt;
        yy0+=yyt;
    }
    std::cout<<std::setprecision(8)<<min;


    return 0;
}
