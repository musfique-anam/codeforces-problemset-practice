#include<bits/stdc++.h>
using namespace std;

int main(){
    int banana,balance,buy,borrow=0,total=0,cost=0,zero=0;
    cin>>banana>>balance>>buy;

    for(int i=1;i<=buy;i++){
        total=(banana*i);
        cost=cost+total;
    }

    borrow=cost-balance;

    if(cost<=balance){
        cout<<"0"<<endl;
    }else{
        cout<<borrow<<endl;
    }


}