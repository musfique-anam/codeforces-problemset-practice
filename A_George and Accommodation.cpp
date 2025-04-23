#include<bits/stdc++.h>
using namespace std;

int main(){
    int rooms,present,capacity,space,count=0;
    cin>>rooms;
    while(rooms--){
        cin>>present>>capacity;
        space=capacity-present;
        if(space>=2){
            count ++;
        }
    }
    cout<<count;
}