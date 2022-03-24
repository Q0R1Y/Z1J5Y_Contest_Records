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

priority_queue<queue<ll>, vector<ll>, greater<ll> >r_heap;
priority_queue<queue<ll>, vector<ll>, less<ll> >l_heap;

ll l_sum, r_sum;
const ll mod = 1e9+7;
int main(){
   int n = read();
   for(int i = 1; i <= n; ++i){
      int a = read();
      ll val = a-i;
      if(l_heap.empty()){
         l_heap.push(val);
         l_sum += val;
         l_sum%=mod;
         printf("0 ");
         continue;
      }
      else if(val > l_heap.top()) {
         r_heap.push(val);
         r_sum += val;
         r_sum%=mod;
            
      }
      else {
         l_heap.push(val);
         l_sum += val;
         l_sum%=mod;
      }
      while(fabs(l_heap.size()-r_heap.size()) > 1){
         if(l_heap.size() > r_heap.size()){
            r_heap.push(l_heap.top());
            l_sum -= l_heap.top();
            r_sum += l_heap.top();
            r_sum%=mod;
            l_sum%=mod;
            l_heap.pop();
         } 
         else {
            l_heap.push(r_heap.top());
            r_sum -= r_heap.top();
            l_sum += r_heap.top();
            r_sum%=mod;
            l_sum%=mod;
            r_heap.pop();
         }
      } 
      if(i&1){
         val=(r_sum-l_sum)%mod;
         val+=(l_heap.size() > r_heap.size())?l_heap.top():-r_heap.top();
         // printf(" %lld", ans%mod);
         std::cout<<val%mod<<" ";
      }
      else{
         // printf(" %lld", (r_sum-l_sum)%mod);
         std::cout<<(r_sum-l_sum)%mod<<" ";
      }
      //cout << l_sum << " " << r_sum << endl;
   }
   return 0;
}
