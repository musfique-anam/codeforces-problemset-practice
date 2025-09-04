#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,idx,t;
    vector <int> v;
    for(int i=0;i<25;i++){
        cin>>a;
        v.push_back(a);
        if(v[i]==1){
            idx=i;
        }
    }

    int row = idx / 5;
    int col = idx % 5;
    
    int moves = abs(row - 2) + abs(col - 2);
    cout << moves << endl;
}