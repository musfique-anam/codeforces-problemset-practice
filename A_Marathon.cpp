#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0,t,a,b,c,d;
    cin>>t;
    while(t--){
        count=0;
        cin>>a>>b>>c>>d;
        if(b>a){
            count++;
        }if(c>a){
            count++;
        }if(d>a){
            count++;
        }

        cout<<count<<endl;
    }
}