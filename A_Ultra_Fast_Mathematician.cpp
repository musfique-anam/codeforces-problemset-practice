#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,ans;
    cin>>s1>>s2;

    int len=s1.size();
    ans=s2;

    for(int i=0;i<len;i++){
        if(s1[i] == s2[i]){
            ans[i]='0';
        }else{
            ans[i]='1';
        }
    }

    cout<<ans<<endl;
}