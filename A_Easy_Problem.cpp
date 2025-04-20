#include <bits/stdc++.h>
using namespace std;

void thenamerahulkr() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i < n; ++i) {
        int a = i;
        int b = n - a;
        if (n==a+b) {
            count++;
        }
    }
    cout << count << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        thenamerahulkr();
    }
    return 0;
}
