#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,step,count;
    count=5;
    cin>>x;
    if(x>5){
        while(count != 0){
            a=x/count;
            if(a>0){
                step=a;
                x=x-(a*count);
            }else{
                step=step+1;
                break;
            }
            count--;
        }
        cout<<step<<endl;
    }else{
        cout<<"1"<<endl;
    }
}