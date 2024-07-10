#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 31; i >= 0; --i) {
        int total = 0;
        int mx = 1LL << (i + 1);
        int cnt = 0;

        for (int j = 0; j < n; ++j) {
            if (a[j] < mx) {
                total |= a[j];
            } else {
                ++cnt;
            }
        }

        bool valid = true;
        for (int j = 0; j < i; ++j) {
            if (!(total & (1LL << j))) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << cnt << endl;
            return;
        }
    }

    cout << n << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}

