#include <bits/stdc++.h>
using namespace std;

// ---------- MACROS ----------
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
#define tc int t; cin >> t; while(t--)

// ---------- SOLVE FUNCTION ----------
void solve() {
    // Your logic here
    int n, k;
    cin>>n>>k;
    long long size = n*k;
    vector<long long> arr(size);
    for(long long i=0; i<size; i++){
        cin>>arr[i];
    }
    long long sum = 0;
    long long pointer = size;
    while(k--){
        pointer = pointer-(n/2+1);
        sum += arr[pointer];
    }
    cout<<sum<<nl;
}

// ---------- MAIN ----------
int main() {
    fast_io
    tc {
        solve();
    }
    return 0;
}