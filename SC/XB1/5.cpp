#include <bits/stdc++.h>

#define ll long long
#define inf 0x3f3f3f
using namespace std;
const int maxn = 1e5+10;
const ll mod = 1e9+7;
int read(){
   int x=0;bool f=0;char c=getchar();
   while (c<'0'||c>'9'){if (c=='-')f=1;c=getchar();}
   while (c>='0'&&c<='9'){x=(x<<1)+(x<<3)+(c^48);c=getchar();}
   return f?-x:x;
}

ll dp[2021][270];
ll C[2021][2021];
void Prepare() {
   for (int i = 0; i < 2021; i++) {
      C[i][0] = C[i][i] = 1;
   for (int j = 1; j < i; j++)
      C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
}
}
int main(){
   Prepare();
   int n = read(), r = read();
   for(int i = 0; i <= 26; i++) dp[0][i] = 1;
   for(int i = 1; i <= n; ++i){
      for(int j = 1; j <= 26; ++j){
         for(int k = 0; k <= min(r, i); ++k){
            dp[i][j] = (dp[i][j] + dp[i-k][j-1] * C[i][k])%mod;
         }
      }
   }
   printf("%lld", dp[n][26]);
   return 0;
}
