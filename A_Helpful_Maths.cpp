#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    vector<int> v;
    cin>>s;
    for(int i=0;i<s.size();i=i+2){
        string a=s[i];
        int z=stoi(a);
        v.push_back(z);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}