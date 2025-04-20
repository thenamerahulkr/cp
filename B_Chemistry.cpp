#include <iostream>
#include <vector>
using namespace std;

bool canMakePalindrome(string s, int k) {
    vector<int> freq(26, 0);
    int n = s.length();
    for (char c : s) {
        freq[c - 'a']++;
    }

    long long oddCount = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }
    return (k+1 >= oddCount);
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n, k;
        string s;
        cin >> n >> k >> s;

        if (canMakePalindrome(s, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
