#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    string x_copy = x;  
    int operations = 0;
    while (x_copy.length() <= 25) { 
        if (x_copy.find(s) != string::npos) { 
            cout << operations << endl;
            return;
        }
        x_copy += x; 
        operations++;
    }
    cout << -1 << endl; 
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
