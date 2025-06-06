#include<bits/stdc++.h>
using namespace std;
int main(){
    int z;
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.size();
    for(int i=0;i<n;i++){
        if(tolower(str1[i] == tolower(str2[i]))){
            z=0;
        }else if(tolower(str1[i] < tolower(str2[i]))){
            z=-1;
        }else if(tolower(str1[i] > tolower(str2[i]))){
            z=1;
        }
    }
    cout<<z<<endl;
}