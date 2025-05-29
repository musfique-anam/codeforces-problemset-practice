#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,x,y;
        cin>>s;
        x=s[0];
        y=s[1];
        int a=stoi(x);
        int b=stoi(y);
        int sum=a+b;
        cout<<sum<<endl;
    }
}