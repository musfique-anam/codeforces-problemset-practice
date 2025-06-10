#include<bits/stdc++.h>
using namespace std;

int distinct(string str){
    unordered_set<char> s;
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    return s.size();
}

int main(){
    string s;
    cin>>s;
    int size=distinct(s);

    int num=size%2;

    if(num == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}