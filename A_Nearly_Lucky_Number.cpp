#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    int N,count=0;
    cin>>s;
    int size=s.length();
    for(int i=0;i<size;i++){
        a=s[i];
        N=stoi(a);
        if(N == 4 || N == 7){
            count ++;
        }
    }

    if(count == 4 || count == 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}