#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,a,b;
    int t,A,N;
    cin>>t;
    while(t--){
        cin>>str;
        A=str.size();
        a=str[0];
        b=str[A-1];
        if(A>10){
            N=A-2;
            cout<<a<<N<<b<<endl;
        }else{
            cout<<str<<endl;
        }
    }
}