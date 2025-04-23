#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define print_yes cout<<"YES"<<nl;
#define print_no cout<<"NO"<<nl;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>> n >> k >> x;\
        ll minimum_sum = k*(k+1)/2;
        ll maximum_sum = k*(2*n-k+1)/2;
        if(x >= minimum_sum and x <= maximum_sum){
            print_yes;
        }
        else{
            print_no;
        }
    }
    return 0;
}