#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;

    unordered_set <char> s1;
    for(int i=0;i<n;i++){
        s1.insert(s[i]);
    }

    int d=s1.size();
    cout<<d<<endl;
    if(d==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}