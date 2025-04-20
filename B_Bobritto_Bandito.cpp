#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // The length on day m is m + 1
        // Let's choose l' = l + (n - m) / 2 to keep it centered
        int len = m + 1;
        int l_prime = max(l, r - m);
        int r_prime = l_prime + m;

        cout << l_prime << " " << r_prime << "\n";
    }
    return 0;
}
