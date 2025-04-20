#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // If k == 1, we can only check if it's already sorted
        if (k == 1) {
            if (is_sorted(a.begin(), a.end())) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            // If k >= 2, we can always sort the array
            cout << "YES\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
