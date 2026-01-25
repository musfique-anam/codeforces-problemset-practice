#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,L,R,n,q,x,y;

    cin>>t;
    while(t--){
        cin>>n>>q;

        vector<int> a;
        vector<int> b;

        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        for(int i=0;i<n;i++){
            cin>>y;
            b.push_back(y);
        }

        for(int i=0;i<q;i++){
            cin>>L>>R;

            accumulate(a[L],a[R],0);
            
        }










    }




}