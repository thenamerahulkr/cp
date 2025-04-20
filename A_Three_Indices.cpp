#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int j = 1; j < n - 1; j++) {
        if (p[j] > p[j - 1] && p[j] > p[j + 1]) {
            cout << "YES\n";
            cout << j << " " << j + 1 << " " << j + 2 << "\n"; 
            return;
        }
    }
    cout << "NO\n";
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
