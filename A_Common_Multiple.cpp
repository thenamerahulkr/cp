#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        unordered_set<int> st(v.begin(),v.end());
        cout<<st.size()<<endl;
        t--;
    }
    return 0;
}
