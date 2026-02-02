#include<bits/stdc++.h>
using namespace std;

void finder(int year){
    year++;

    string s=to_string(year);
    
    unordered_set<int> myNum(s.begin(),s.end());

    if(myNum.size() == 4){
        cout<<year;
    }else{
        finder(year);
    }

}


int main(){
    int year;
    cin>>year;

    finder(year);
}