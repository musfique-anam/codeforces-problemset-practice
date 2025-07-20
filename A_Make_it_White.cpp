#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,first,last;
    cin>>t;
    while(t--){
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                first=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                last=i;
            }
        }


        cout<<(last-first)+1<<endl;
    }
}