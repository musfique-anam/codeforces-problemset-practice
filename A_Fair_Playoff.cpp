#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s1,s2,s3,s4,min1,min2,max1,max2;
    cin>>t;
    while(t--){
        cin>>s1>>s2>>s3>>s4;
        if(s1>s2){
            min1=s2;
            max1=s1;
        }else{
            min1=s1;
            max1=s2;
        }

        if(s3>s4){
            min2=s4;
            max2=s3;
        }else{
            min2=s3;
            max2=s4;
        }

        if(max1<min2 || max2<min1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}