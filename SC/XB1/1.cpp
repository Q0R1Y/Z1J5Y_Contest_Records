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
ll gcd(ll a, ll b){
   return b?gcd(b, a%b):a;
}
int main(){
   ll a, b, l, r;
   cin >> a >> b >> l >> r;
   l--;
   ll g = gcd(a, b);
   g = a*b/g;
   ll ff = r/a+r/b-r/(g);
   ll ff_1 = l/a+l/b-l/(g);
   ll ans = ff-ff_1;
   cout << ans;
   return 0;
}
