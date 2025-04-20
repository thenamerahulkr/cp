#include <iostream>
#include <vector>
using namespace std;

// Function to calculate minimum swaps required
int minOperationsToMakeSame(int N, string S1, string S2, string S3) {
    vector<int> count0(3, 0), count1(3, 0);

    // Count number of 0s and 1s in each string
    for (int i = 0; i < N; i++) {
        count0[0] += (S1[i] == '0');
        count1[0] += (S1[i] == '1');
        
        count0[1] += (S2[i] == '0');
        count1[1] += (S2[i] == '1');
        
        count0[2] += (S3[i] == '0');
        count1[2] += (S3[i] == '1');
    }

    // Total count of 0s and 1s
    int total0 = count0[0] + count0[1] + count0[2];
    int total1 = count1[0] + count1[1] + count1[2];

    // If total count of 0s or 1s is not a multiple of 3, it's impossible
    if (total0 % 3 != 0 || total1 % 3 != 0) {
        return -1;
    }

    // Target count in each string
    int target0 = total0 / 3, target1 = total1 / 3;

    // Calculate swaps required to balance 0s and 1s
    int swaps = 0;
    for (int i = 0; i < 3; i++) {
        if (count0[i] > target0) {
            swaps += (count0[i] - target0);
        }
    }
    return swaps;
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Length of strings

        string S1, S2, S3;
        cin >> S1 >> S2 >> S3;

        cout << minOperationsToMakeSame(N, S1, S2, S3) << endl;
    }
    return 0;
}
