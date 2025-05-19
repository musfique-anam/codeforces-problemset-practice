#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,countA=0,countD=0;
    cin>>n;
    string str,str1,A="A",D="D";
    cin>>str;

    for(int i=0;i<n;i++){
        str1=str[i];
        if(str1==A){
            countA++;
        }else{
            countD++;
        }
    }

    if(countA>countD){
        cout<<"Anton"<<endl;
    }else if(countA<countD){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}