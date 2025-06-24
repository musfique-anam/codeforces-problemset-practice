#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int count=0,count1;
        for(int i=0;i<n;i++){
            int m=v[i];
            int n=v[i+1];
            if(m =! n){
                count=i+1;
            }else{
                count1++;
            }
        }
        cout<<count<<endl;
    }
}