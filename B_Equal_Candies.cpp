#include<bits/stdc++.h>
using namespace std;
void thenamerahulkr(){
    int n; 
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int total_candy_eaten = 0;
    int minimum =a[0];
    for(int i =0; i<a.size(); i++){
        total_candy_eaten+=a[i]-minimum;
    }
    cout<<total_candy_eaten<<endl;  
}
int main()
{
    int t; 
    cin>>t;
    while(t--){
        thenamerahulkr();
    }
}