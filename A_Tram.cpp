#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,exit,enter,max_capacity=0,current_passenger=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>exit>>enter;

        current_passenger=current_passenger - exit + enter;

        if(current_passenger > max_capacity){
            max_capacity=current_passenger;
        }

    }

    cout<<max_capacity<<endl;
}