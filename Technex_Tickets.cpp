#include <iostream>
using namespace std;

int getTimeToGetTicket(int N) {
    if (N % 2 == 1) { 
        return (N / 2) + 1; // Odd positions
    } else { 
        return (N / 2) + 2;  // Even positions
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << getTimeToGetTicket(N) << endl;
    }
    
    return 0;
}
