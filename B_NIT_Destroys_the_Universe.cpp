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
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }
    int count_of_zeroes = 0;
    for(long long i=0; i<n; i++) {
        if(arr[i] == 0) {
            count_of_zeroes++;
        }
    }
    bool found_zero = false;
    int left = 0, right = n-1;
    while(arr[left]==0){
        left++;
    }
    while(arr[right]==0){
        right--;
    }
    for(int i=left; i<=right; i++){
        if(arr[i] == 0){
            found_zero = true;
            break;
        }
    }
    if(count_of_zeroes ==n){
        cout<<0<<nl;
    }
    else if(found_zero){
        cout<<2<<nl;
    }
    else{
        cout<<1<<nl;
    }
}

// ---------- MAIN ----------
int main() {
    fast_io
    tc {
        solve();
    }
    return 0;
}