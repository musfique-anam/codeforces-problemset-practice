#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    reverse(str1.begin(),str1.end());
    if(str1.compare(str2)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}