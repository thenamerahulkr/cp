#include <bits/stdc++.h>
using namespace std;

int minOperationsToGoodArray(vector<int>& a) {
    int n = a.size();
    int operations = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] % 2 == a[i + 1] % 2)) {
            operations++; 
        }
    }
    return operations;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i =0;i<a.size();i++){
            cin>>a[i];
        }
        cout << minOperationsToGoodArray(a) << endl;
    }
    return 0;
}
