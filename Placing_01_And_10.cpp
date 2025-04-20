#include <iostream>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    // Calculate the number of alternating pairs and leftover strings
    int alternatingPairs = min(X, Y);  // Maximum alternating pairs of "01" and "10"
    int leftover = abs(X - Y);         // Remaining "01" or "10" strings

    // Total transitions
    int transitions = 2 * alternatingPairs + leftover;

    cout << transitions << endl;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
