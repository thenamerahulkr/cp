#include <iostream>
#include <vector>
using namespace std;
int thenamerahulkr(vector<int>& a) {
    int n = a.size();
    vector<int> prefix(n + 1, 1), suffix(n + 2, 1);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] * a[i - 1];
    }
    for (int i = n; i >= 1; i--) {
        suffix[i] = suffix[i + 1] * a[i - 1];
    }
    for (int k = 1; k <= n - 1; k++) {
        if (prefix[k] == suffix[k + 1]) {
            return k;
        }
    }

    return -1; 
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << thenamerahulkr(a) << endl;
    }
    return 0;
}
