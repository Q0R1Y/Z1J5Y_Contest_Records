#include<bits/stdc++.h>

using ll=long long;

std::string t;
void solve()
{
    int n;
    std::cin>>n;
    std::cin>>t;
    int i;
    for(i=0;i<t.size()&&t[i]=='0';++i);
    int pre=i;
    int cnt=0;
    for(int i=pre;i<t.size();++i)
    {
        if(t[i]!='0')
        {
            cnt+=t[i]-'0'+1;
        }
        
    }
    if(t[t.size()-1]=='0')
    {
        std::cout<<cnt<<"\n";
    }
    else std::cout<<cnt-1<<"\n";

}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin>>T;
    while(T--)
        solve();



    return 0;
}