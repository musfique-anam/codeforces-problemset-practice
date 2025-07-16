#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,max,min;
        cin>>a>>b;
        if(a>b){
            max=a;
            min=b;
        }else if(a<b){
            max=b;
            min=a;
        }else{
            max=min=a;
        }

        cout<<min<<" "<<max<<endl;
    }
}