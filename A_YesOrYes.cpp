#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        string str,s1,s2,s3,Y="Y",y="y",E="E",e="e",S="S",s="s";
        cin>>str;
        s1=str[0];
        s2=str[1];
        s3=str[2];
        if(s1==Y || s1==y){
            if(s2==E || s2==e){
                if(s3==S || s3==s){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}