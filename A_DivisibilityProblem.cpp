#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d,e,div,ans;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=a/b;
        div=a%b;
        if(div==0){
            cout<<"0"<<endl;
        }else{
            e=(c+1)*b;
            ans=e-a;
            cout<<ans<<endl;
        }
    }
}