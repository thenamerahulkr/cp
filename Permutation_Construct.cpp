#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve(int N, int K) {
    if (K > N) { // If K > N, it's impossible
        cout << -1 << endl;
        return;
    }

    // Divide numbers into groups based on modulo K
    vector<vector<int>> groups(K);
    for (int i = 1; i <= N; ++i) {
        groups[i % K].push_back(i);
    }

    // Check if any group size is 1 (impossible to rearrange elements)
    for (auto &group : groups) {
        if (group.size() == 1) {
            cout << -1 << endl;
            return;
        }
    }

    // Create permutation by cyclically shifting elements within each group
    vector<int> P(N + 1);
    for (int mod = 0; mod < K; ++mod) {
        int size = groups[mod].size();
        for (int i = 0; i < size; ++i) {
            P[groups[mod][i]] = groups[mod][(i + 1) % size];
        }
    }

    // Print the permutation
    for (int i = 1; i <= N; ++i) {
        cout << P[i] << " ";
    }
    cout << endl;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        solve(N, K);
    }

    return 0;
}
