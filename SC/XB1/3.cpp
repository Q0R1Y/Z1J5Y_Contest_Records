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
#define rep(i, x, y) for (register int i = x; i <= y; ++i)
#define dep(i, x, y) for (register int i = x; i >= y; --i)
using namespace std;
const int maxn = 1e5 + 10;
int f[maxn];
int col[maxn], num[maxn];
int ans;
void init()
{
   for (int i = 1; i < maxn; ++i)
      f[i] = i, num[i] = 1;
}

int find(int x)
{
   return x == f[x] ? x : f[x] = find(f[x]);
}
void merge(int a, int b)
{
   int fa1 = find(a), fa2 = find(b);
   if (fa1 == fa2)
   {
      if (!col[fa1])
      {
         ans += num[fa1];
         col[fa1] = 1;
      }
   }
   else
   {
      if (!col[fa1] && col[fa2])
      {
         num[fa2] += num[fa1];
         f[fa1] = fa2;
         ans += num[fa1];
      }
      if (col[fa1] && !col[fa2])
      {
         num[fa1] += num[fa2];
         f[fa2] = fa1;
         ans += num[fa2];
      }
      else
      {
         num[fa2] += num[fa1];
         f[fa1] = fa2;
      }
   }
   cout << ans << endl;
}
int main()
{
   init();
   int n, m;
   cin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      merge(a, b);
   }
   return 0;
}
