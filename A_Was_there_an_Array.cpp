#include <iostream>
#include <vector>
using namespace std;

bool existsArray(const vector<int>& b) {
    for (int i = 0; i < b.size() - 1; ++i) {
        if (b[i] == 1 && b[i + 1] == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; ++i) {
            cin >> b[i];
        }

        if (existsArray(b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
