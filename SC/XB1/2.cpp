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

int main(){
   int n;
   cin >> n;
   ll ans = 0;
   ll ff = 0;
   ll a;
   for(int i = 1; i <= n; ++i){
      cin >> a;
      if(!a) {
         ff = 0;
         continue;
      }
      if(ff){
         a--;
         ans += 1;
      }
      ans += a/2;
      ff = a%2;
   }
   cout << ans;
   return 0;
}
