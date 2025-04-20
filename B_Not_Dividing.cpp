#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]==1){
            a[i]++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if(a[i + 1] % a[i] == 0) {
            a[i + 1]++; 
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
