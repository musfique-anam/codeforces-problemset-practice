#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a,n,k,idx;
    cin>>s;
    cin>>k;
    n=s.size();
    for(int i=0;i<k;i++){
        idx=n-i;
        a=stoi(s);

        if(s[idx] == 0){
            a=a/10;
        }else{
            a=a-1;
        }

        s=to_string(a);
    }
    cout<<a<<endl;
    
}