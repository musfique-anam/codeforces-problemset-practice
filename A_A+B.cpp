#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,A,B;
    int t,a,b,sum;
    cin>>t;
    while(t--){
        cin>>str;
        A=str[0];
        B=str[2];
        a=stoi(A);
        b=stoi(B);
        sum=a+b;
        cout<<sum<<endl;
    }
}