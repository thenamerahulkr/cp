#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define nl "\n"
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) cin >> a[i];
        ll min_difference = LLONG_MAX;
        for (ll i = 0; i < n - 1; ++i) {
            ll x = a[i + 1] - a[i];
            min_difference = min(min_difference, x);
        }
        if(min_difference < 0){
            cout<<"0"<<nl;
        }
        else{
            cout<<(min_difference/2)+1<<nl;
        }
    }

    return 0;
}
