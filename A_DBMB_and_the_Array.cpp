#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s,x,a,sum=0,t;
    vector<int> v;

    cin>>t;

    while(t--){

        cin>>n>>s>>x;
    
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
    
        if(sum == s)
        {
            cout<<"YES"<<endl;
        }
        else if(sum > s)
        {
            cout<<"NO"<<endl;
        }
        else if(sum < s)
        {
            while(sum<s){
                sum+=x;
                if(sum == s){
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(sum>s){
                cout<<"NO"<<endl;
            }
        }
        sum=0;
        v.clear();
    }
}