#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i%2 != 0){
            a=s[i];
        }
    }
    cout<<a<<endl;
}
