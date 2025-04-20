#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minActions(const string& s) {
    int n = s.length();
    int actions = 0;
    for (int i = 0; i < n; ) {
        if (s[i] == '.') {
            // Place water in this cell and skip the next two cells
            actions++;
            i += 3;
        } else {
            i++;
        }
    }
    return actions;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minActions(s) << endl;
    }
    return 0;
}