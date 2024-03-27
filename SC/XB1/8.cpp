#include <bits/stdc++.h>

#define ll long long
#define int long long
#define pii pair<int, int>
#define rep(i, x, y) for(int i = x; i <= y; ++i)
#define dep(i, x, y) for(int i = x; i >= y; --i)
#define debug(x) cout << #x": " << x << endl;
#define ct printf("\n");
#define mod 1000000007
using namespace std;
const int maxn = 1e6+10;
const ll inf = 1e18;

template <typename _tp>
inline void read(_tp& x) {
    char ch = getchar(), sgn = 0;
    while (ch ^ '-' && !isdigit(ch)) ch = getchar();
    if (ch == '-') ch = getchar(), sgn = 1;
    for (x = 0; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
    if (sgn) x = -x;
}

int n, m, a[maxn];

int ksm(int x, int y){
    if(!y) return 1;
    if(y&1) return x*ksm(x, y-1)%mod;
    int tmp = ksm(x, y/2);
    return tmp*tmp%mod;
}
int fac[maxn], inv[maxn];

int get(int x, int y){
    return fac[x] * inv[y] % mod * inv[x - y] % mod;
}
signed main(){
    //freopen("1.in", "r", stdin);
    //freopen("1.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fac[0] = 1;
    rep(i, 1, maxn - 1) fac[i] = fac[i - 1] * i % mod, inv[i] = ksm(fac[i], mod - 2);
    int T;
    cin >> T;
    while(T--){
        cin >> n >> m;
        rep(i, 1, m) {
            int x;
            cin >> x;
            n -= x;
        }
        n += m + 1;
        if(n <= m - 1){
            cout << "-1" << endl;
        }
        else {
            int ans = get(n, m - 1);
            cout << ans << endl;
        }
    }
    return 0;
}
