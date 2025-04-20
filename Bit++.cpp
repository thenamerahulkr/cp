#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    int a = 0;  // Initialize counter
    
    while (t--) {
        string statement;
        cin >> statement;  // Read the operation
        
        if (statement == "X++" || statement == "++X") {
            a++;
        } else {
            a--;
        }
    }
    
    cout << a << endl;  // Print final result after all operations
    return 0;
}
