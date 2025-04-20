#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a;
        b = a; 
        reverse(b.begin(), b.end()); 
        for(int i =0; i<b.size(); i++){
            if(b[i]=='p'){
                cout<<"q";
            }
            else if(b[i]=='q'){
                cout<<'p';
            }
            else{
                cout<<'w';
            }
        }
        cout<<endl;
        
    }
    return 0;
}
