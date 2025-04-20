#include <iostream>
#include <string>
using namespace std;

// Function to calculate the minimum possible length of the string
int minLengthAfterOperations(const string& s) {
    int runs = 0; // Initialize runs as zero
    for (size_t i = 0; i < s.length(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) { 
            ++runs; // Count runs whenever we encounter a new character
        }
    }
    return runs; // Runs represent the minimum achievable length
}

int main() {
    int t; // Number of test cases
    cin >> t; // Input the number of test cases
    while (t--) {
        string s;
        cin >> s; // Input string
        cout << minLengthAfterOperations(s) << endl; // Output result
    }
    return 0;
}
