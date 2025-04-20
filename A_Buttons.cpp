#include <iostream>
using namespace std;

void thenamerahulkr(int a, int b, int c) {
    long long total_moves = a + b + c;
    if (total_moves % 2 == 1) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        thenamerahulkr(a, b, c);
    }
    return 0;
}
