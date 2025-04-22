#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,M=0;
    string a,Z,b="+",c="-";
    cin>>t;
    while(t--){
        cin>>Z;
        a=Z[1];
        if(a == b){
            M++;
        }if(a == c){
            M--;
        }
    }
    cout<<M;
}