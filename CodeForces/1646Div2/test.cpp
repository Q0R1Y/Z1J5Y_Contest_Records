#include<bits/stdc++.h>


void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
}
#define ll long long
using namespace std;
int T;
ll n,ans,p,jc[1007];
ll sw(ll x){
	ll ans=0;
	while(x){
		if(x%2==1) ans++;
		x/=2;
	}
	return ans;
}
void dfs(ll z,ll x,ll y){
	ans=min(ans,y+sw(z));
	for(int i=x+1;jc[i]<=z;i++)
		dfs(z-jc[i],i,y+1);
	return;
}
int main(){
	jc[0]=1;
	for(int i=1;i<=1000;i++)
		jc[i]=jc[i-1]*i;
	scanf("%d",&T);
	while(T--){
		scanf("%lld",&n);
		ans=1e18,dfs(n,0,0);
		printf("%lld\n",ans);
	}
	return 0;
}

