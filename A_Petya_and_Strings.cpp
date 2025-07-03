#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    string str1,str2;
    cin>>str1>>str2;

    for(auto& x : str1){
        x=tolower(x);
    }
    for(auto& y : str2){
        y=tolower(y);
    }

    c=str1.compare(str2);
    cout<<c<<endl;

}