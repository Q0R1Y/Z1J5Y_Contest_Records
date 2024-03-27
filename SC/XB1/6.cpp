#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <stack>
#include <cmath>
//#include<map>

#define ll long long
#define inf 0x3f3f3f
#define rep(i, x, y) for(register int i = x; i <= y; ++i)
#define dep(i, x, y) for(register int i = x; i >= y; --i)
using namespace std;
const int maxn = 1e5+10;

int read(){
   int x=0;bool f=0;char c=getchar();
   while (c<'0'||c>'9'){if (c=='-')f=1;c=getchar();}
   while (c>='0'&&c<='9'){x=(x<<1)+(x<<3)+(c^48);c=getchar();}
   return f?-x:x;
}

priority_queue<ll>q[1010];
int main(){
   int n = read(), m = read();
   for(int i = 1; i <= n; ++i){
      int a = read(), b = read();
      q[b].push(a);
   }
   ll A = 0, B = 0;
   for(int i = 1; i <= m; ++i){
      double mx = 0;
      int index = -1;
      for(int j = 1; j <= 1000; ++j){
         if(q[j].empty()) continue;
         if((double)(A+q[j].top())/(B+j) > mx){
            mx = (double)(A+q[j].top())/(B+j);
            index = j;
         }
      }
      A += q[index].top();
      B += index;
      q[index].pop();
   }
   printf("%lld", (ll)ceil((double)A/B));
   return 0;
}
