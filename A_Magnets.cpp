#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0,A,B,Y,store;
    string str,a,b;
    cin>>t;
    A=t;
    Y=t-1;
    while(t--)
    {
        cin>>str;
        a=str[0];
        b=str[1];
        if(t!=Y){
            if(str[0]==store){
                count ++;
            }
        }
        store=str[1];
    }
    B=count+1;
    cout<<B;
}