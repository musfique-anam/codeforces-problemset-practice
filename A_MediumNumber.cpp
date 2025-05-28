#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    while(t--){
        vector<int> v;
        for(int i=0;i<3;i++){
            cin>>a;
            v.push_back(a);
        }
        stable_sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
}