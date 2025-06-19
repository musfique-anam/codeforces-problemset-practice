#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<4;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    unordered_set<int> A;
    for(int i=0;i<4;i++){
        A.insert(v[i]);
    }
    int distinct=A.size();

    cout<<4-distinct<<endl;
}