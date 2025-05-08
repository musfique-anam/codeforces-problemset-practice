#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    char c;
    int first;
    cin>>str;
    first=str[0];
    if(first>=97){
        first-=32;
        c=char(first);
        str[0]=c;
        cout<<str;
    }else{
        cout<<str;
    }
}