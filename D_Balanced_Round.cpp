#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int cnt = 1;
    int max_len = 1;
    for(int i=1;i<n;i++){
        if(a[i] - a[i-1] <= k){
            cnt++;
        } else {
            cnt = 1;
        }
        max_len = max(max_len, cnt);
    }
    cout<< n - max_len << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}