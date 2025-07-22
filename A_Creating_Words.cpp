#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string x,y,temp;
        temp=b[0];
        b[0]=a[0];
        a.replace(0,1,temp);

        cout<<a<<" "<<b<<endl;
        
    }
}