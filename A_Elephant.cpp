#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int steps=x/5;
    int stepsRemain=x%5;
    if(stepsRemain != 0){
        steps=steps+1;
    }
    cout<<steps<<endl;
}