#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
#define tc int t; cin >> t; while (t--)

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a + c) % 2 == 0 && b == (a + c) / 2) {
        YES;
    }
    else if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
        YES;
    }
    else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) {
        YES;
    }
    else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
        YES;
    }
    else {
        NO;
    }
}
int main() {
    fast_io
    tc {
        solve();
    }
}
