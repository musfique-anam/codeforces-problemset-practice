#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,solve=0;
    cin>>n;
    int arr[3];
    while(n--){
        int count=0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<3;i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count>=2){
            solve++;
        }
    }
    cout<<solve;
}