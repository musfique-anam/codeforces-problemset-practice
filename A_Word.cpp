#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int upper=0,lower=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>91){
            lower++;
        }else{
            upper++;
        }
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }else if (upper == lower){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }else if (upper < lower){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
}