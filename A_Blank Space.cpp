#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,size,count=0,max;
    cin>>t;
    while(t--){
        cin>>size;
        int arr[size];
        int arr2[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                count++;
            }else{
                arr2[i]=count;
            }
        }
        max=arr2[0];
        for(int i=0;i<size;i++){
            if(arr2[i]>max){
                max=arr2[i];
            }
        }
        cout<<max<<endl;
    }
}