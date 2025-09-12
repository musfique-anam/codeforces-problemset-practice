#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string str;
    vector<int> v;
    cin>>t;
    while(t--){
        getline(cin,str);

        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                int a=i+1;
                v.push_back(a);
            }
        }

        for(int i=0;i<=v.size();i++){
            int idx=v[i];
            if(i==0){
                cout<<str[0];
            }
            cout<<str[idx];
        }
    }
}