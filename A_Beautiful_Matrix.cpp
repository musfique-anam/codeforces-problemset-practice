#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,idx,t;
    vector <int> v;
    for(int i=0;i<25;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<25;i++){
        if(v[i]==1){
            idx=i;
        }
    }

    if(idx > 12){
        t=idx-12;
    }else if(idx == 12){
        t=0;
    }else if(idx<13){
        t=12-idx;
    }
    cout<<t<<endl;
}