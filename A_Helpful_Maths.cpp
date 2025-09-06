#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    vector<int> v;
    cin>>s;
    for(int i=0;i<s.size();i=i+2){
        string temp(1,s[i]);
        int z=stoi(temp);
        v.push_back(z);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        if(i!=0){
            cout<<'+';
        }
        cout<<v[i];

    }

}