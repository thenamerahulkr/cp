#include<bits/stdc++.h>
using namespace std;
void thenamerahulkr(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int a_b = min(m,a)+min(b,m);
    int result =min(2*m,a_b+c);
    cout<<result<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        thenamerahulkr();
    }
    return 0;
    
}