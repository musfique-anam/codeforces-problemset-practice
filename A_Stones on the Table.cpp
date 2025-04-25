#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,count=0;
    string str;
    cin>>t;
    cin>>str;
    for(int i=0;i<t;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout<<count;
}