#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2,s3,len,plus="+";
    int a,b,c,d,size;
    cin>>s;
    len=s.length();
    for(int i=0;i<len;i++){
        s1=s[i];
        if(s1 == plus){
            s.erase(s.begin()+i);
        }
    }
    vector <int> v;
    size=s.length();
    for(int i=0;i<size;i++){
        s2=s[i];
        d=stoi(s2);
        v.push_back(d);
    }

    v.sort(v.begin(),v.end());


}