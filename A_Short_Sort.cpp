#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;

        if(str == "abc"){
            cout<<"YES"<<endl;
        }else{
            swap(str[0],str[1]);
            if(str == "abc"){
                cout<<"YES"<<endl;
            }else{
                swap(str[0],str[1]);
                swap(str[1],str[2]);
                
                if(str == "abc"){
                    cout<<"YES"<<endl;
                }else{
                    swap(str[1],str[2]);
                    swap(str[0],str[2]);
            
                    if(str == "abc"){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }
}