#include <bits/stdc++.h>
using namespace std;

void thenamerahulkr(int f1, int p1, int f2, int p2){
   int diff_1 = abs(f1-p1);
   int diff_2 = abs(f2-p2);
   if(diff_1 < diff_2){
       cout<<"First"<<endl;
   }
   else if(diff_1 > diff_2){
       cout<<"Second"<<endl;
   }
   else{
       cout<<"Both"<<endl;
   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int f1,p1,f2,p2;
        cin>>f1>>p1>>f2>>p2;
        thenamerahulkr(f1,p1,f2,p2);
    return 0;
}
