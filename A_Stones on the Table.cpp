#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,t,size,count=0;
    string str;
    while(t--){
        cin>>str;
        for(int i=0;i<=str.length();i++){
            a=str[i];
            b=str[i+1];
            cout <<"AB"<<a<<" "<<b<<endl;
            if(str[i]==str[i+1]){
                count++;
            }
        }
    }
    // cout<<count;
}