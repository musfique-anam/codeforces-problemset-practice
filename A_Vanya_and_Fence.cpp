#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,count=0;
    cin>>n>>h;
    vector <int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(v[i]>h){
            count++;
        }
    }
    int sum=count+n;
    cout<<sum<<endl;
    
}