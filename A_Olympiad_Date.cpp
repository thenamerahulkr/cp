#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const vector<int> TARGET = {0, 1, 0, 3, 2, 0, 2, 5};

int find_earliest_step(int n, vector<int>& digits) {
    unordered_map<int, int> needed, found;
    
    // Store required digit frequencies
    for (int num : TARGET) needed[num]++;
    
    // Process input digits
    for (int i = 0; i < n; i++) {
        found[digits[i]]++;  // Add current digit
        
        // Check if we have all required digits
        bool has_all = true;
        for (auto &p : needed) {
            if (found[p.first] < p.second) {
                has_all = false;
                break;
            }
        }
        
        if (has_all) return i + 1; // Steps are 1-based
    }

    return 0; // Never formed the date
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; i++) cin >> digits[i];

        cout << find_earliest_step(n, digits) << '\n';
    }

    return 0;
}
