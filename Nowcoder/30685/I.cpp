#include<bits/stdc++.h>

#define int long long

void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
using ll = long long;
const ll LEN=1e3+7;
const ll MOD=1e8;
const int INF=INT_MAX;
const ll LLINF=LONG_LONG_MAX;
const double eps=1e-8;

std::string k[LEN];
bool flag[LEN][LEN];
bool E[LEN][LEN];
ll xf[4]{0,0,1,-1};
ll yf[4]{1,-1,0,0};
ll res;
ll n,m;
void bfs(ll x,ll y)
{
    std::deque<std::pair<ll,ll>> q(1,std::make_pair(x,y));
    E[x][y]=true;
    while(!q.empty())
    {
        std::pair<ll,ll> t=q.front();
        q.pop_front();
        for(ll i=0;i<4;++i)
        {
            if(t.first+xf[i]<0||t.first+xf[i]>n||t.second+yf[i]<0||t.second+yf[i]>m)
                continue;
            if(!E[t.first+xf[i]][t.second+yf[i]]&&k[t.first+xf[i]][t.second+yf[i]]!='1')
            {
                if(k[t.first+xf[i]][t.second+yf[i]]=='0')
                    flag[t.first+xf[i]][t.second+yf[i]]=1;
                E[t.first+xf[i]][t.second+yf[i]]=1;
                q.push_back(std::make_pair(t.first+xf[i],t.second+yf[i]));
            }
        }
    }
}

signed main()
{
    PPP();

    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);


    std::cin>>n>>m;
    std::string t;
    for(ll i=1;i<=n;++i)
    {
        k[i]=".";
        std::cin>>t;
        k[i]+=t;
        k[i]+='.';
    }
    t="";
    t.append(m+2,'.');
    k[n+1]=k[0]=t;
    n++;
    m++;
    bfs(0,0);
    for(ll i=0;i<=n;++i)
    {
        for(ll j=0;j<=m;++j)
        {
            res+=flag[i][j];
        }
    }

    std::cout<<res;

    return 0;
}
