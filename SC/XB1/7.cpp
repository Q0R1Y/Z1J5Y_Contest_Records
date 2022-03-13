#include <bits/stdc++.h>
using namespace std;

struct ValueBIT {
    vector<int> c;
    int n;

    int lowbit(int x) {
        return x & (-x);
    }

    void init(int n) {
        this->n = n;
        c.resize(n + 1);
        for (int i = 1; i <= n; i++) {
            c[i] = lowbit(i);
        }
    }

    void add(int m, int x) {
        for (int i = m; i <= n; i += lowbit(i)) {
            c[i] += x;
        }
    }

    int find_kth(int k) {
        int add = 0, sum = 0;
        for (int i = 20; i >= 0; i--) {
            add += 1 << i;
            if (add > n || c[add] + sum >= k) {
                add -= 1 << i;
            } else {
                sum += c[add];
            }
        }
        return add + 1;
    }
} vbit;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vbit.init(n);
    int now = 1;
    while (n) {
        now = (now - 1 + m - 1) % n + 1;
        int k = vbit.find_kth(now);
        vbit.add(k, -1);
        printf("%d ", k);
        n--;
    }
    return 0;
}
