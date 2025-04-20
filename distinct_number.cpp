#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int count_distinct_numbers(vector<int> &a) {
    unordered_map<int, int> freq_map; // Step 1: Create frequency map
    
    for (int num : a) {
        freq_map[num]++; // Step 2: Count occurrences
    }

    return freq_map.size(); // Step 3: The number of unique keys = distinct numbers
}
int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        // Count distinct numbers using unordered_map
        int distinct_count = count_distinct_numbers(a);
        cout << "Distinct numbers in array: " << distinct_count << endl;
    return 0;
}
