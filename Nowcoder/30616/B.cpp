#include <bits/stdc++.h>

void PPP()
{
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif
}

using ll = long long;
const ll LEN = 1e6 + 7;
const ll MOD = 1e8;
const int INF = INT_MAX;
const ll LLINF = LONG_LONG_MAX;
const double eps = 1e-8;

std::map<ll, ll> primes;
void init(ll n)
{
    primes.clear();
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                primes[i]++;
            }
        }
    }
    if (n != 1)
        primes[n]++;
}
ll cal(ll n, ll p)
{
    ll ans = 0;
    while (n)
    {
        ans += n / p;
        n /= p;
    }
    return ans;
}
bool judge(ll mid)
{
    for (auto it : primes)
        if (cal(mid, it.first) < it.second)
            return false;
    return true;
}
void solve()
{
    ll p;
    std::cin >> p;
    init(p);
    ll l = 1, r = 1e9 + 7, mid, res;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (judge(mid))
        {
            r = mid - 1;
            res = mid;
        }
        else
            l = mid + 1;
    }
    std::cout << res << "\n";
}

int main()
{
    PPP();
    std::cin.tie(0);
    std::cout.tie(0);
    std::ios_base::sync_with_stdio(0);

    int T;
    std::cin >> T;

    while (T--)
        solve();

    return 0;
}
