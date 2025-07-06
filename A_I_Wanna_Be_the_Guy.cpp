#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,z;
    vector<int> v;
    vector<int> w;
  
    cin>>n>>p;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    cin>>q;
    for(int i=0;i<q;i++){
        int b;
        cin>>b;
        w.push_back(b);
    }

    int x=v.back();
    int y=w.back();

    if(x < y){
        z=y;
    }else if (x > y){
        z=x;
    }else if (x == y){
        z=x;
    }

    if(z == n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}
