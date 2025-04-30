#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,count=0;
    cin>>p;
    int array[p];
    for(int i=0;i<p;i++){
        cin>>array[i];
    }
    for(int i=0;i<p;i++){
        if(array[i]==1){
            count++;
        }
    }
    if(count>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
}