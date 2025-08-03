#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i] = ' '){
                
            }
        }


        
    }
}

#include<bits/stdc++.h>
using namespace std;

string trippi(string str){
    string ans="";

    bool a=true;
    for(int i=0; i<str.length();i++){
        if(str[i] == ' '){
            a=true;
        }else if(str[i] != ' ' && a==true){
            ans.push_back(str[i]);
            a=false;
        }
    }
    return ans;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        cout<<trippi(str)<<endl;
    }
}