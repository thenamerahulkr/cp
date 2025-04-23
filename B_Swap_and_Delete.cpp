#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define mod 1000000007
void solve() {
    string s;   
    cin >> s;
    ll count_ones = count(s.begin(), s.end(), '1');
    ll count_zeros = s.size() - count_ones;
    ll length_of_t = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1' and count_zeros > 0){
            count_zeros--;
            length_of_t++;
        } else if(s[i] == '0' and count_ones > 0) {
            length_of_t++;
            count_ones--;
        }
        else{
            break;
        }
    }
    cout<< s.size()-length_of_t << nl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
