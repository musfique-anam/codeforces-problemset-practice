#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,plus,minus;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        plus=a+b;
        minus=a-b;
        if(plus==c){
            cout<<"+"<<endl;
        }else if(minus==c){
            cout<<"-"<<endl;
        }
    }
    
}