#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,dtotal,same,total,distinct;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char> str;
        for(int i=0;i<n;i++){
            str.insert(s[i]);
        }

        distinct=str.size();

        dtotal=distinct*2;
        same=n-distinct;
        total=same+dtotal;
        cout<<total<<endl;
    }
}