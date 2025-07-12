#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A=0,B=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A'){
                A ++;
            }else{
                B ++;
            }
        }
        if(A<B){
            cout<<"B"<<endl;
        }else{
            cout<<"A"<<endl;
        }
    }
}