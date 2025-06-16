#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    vector <int> v;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            a=i;
            v.push_back(a);
        }else{
            b=i*(-1);
            v.push_back(b);
        }
    }

    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

}