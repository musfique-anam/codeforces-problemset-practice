//Trying

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int z=lexicographical_compare(str1, str1.size(), str2, str2.size());
    if(z==1){

    }
    cout<<z;
}