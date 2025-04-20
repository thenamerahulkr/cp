#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        
        char modernName[4] = { a[0], b[0], c[0]};
        cout << modernName << endl;
    }

    return 0;
}
