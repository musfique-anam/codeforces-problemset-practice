#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,a,max;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    max=v[n];
    for(int i=0;i<n;i++){
        a=v[i];
        if(v[i] != max){
            a++;
            count++;
        }

    }

    cout<<count<<endl;
}