#include <bits/stdc++.h>
using namespace std;

// ---------- MACROS ----------
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define YES cout << "DA" << nl
#define NO cout << "NET" << nl
#define tc int t; cin >> t; while(t--)

// ---------- SOLVE FUNCTION ----------
void solve() {
    // Your logic here
    string s;
    cin >> s;
    int count_zeroes = 0;
    int count_ones = 0;
    for (char c : s) {
        if (c == '0') {
            count_zeroes++;
        } else {
            count_ones++;
        }
    }
    int total_moves = min(count_zeroes, count_ones);
    if (total_moves % 2 == 0) {
        NO;
    } else {
        YES;
    }
}

// ---------- MAIN ----------
int main() {
    fast_io
    tc {
        solve();
    }
    return 0;
}