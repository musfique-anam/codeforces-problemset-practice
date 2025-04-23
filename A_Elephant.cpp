#include <bits/stdc++.h>
using namespace std;
int main(){
    int Distance,Steps=0,Reminder;
    cin>>Distance;

    if(Distance >= 5){
        Steps=(Distance/5);
        Distance=(Distance % Steps);
    }
//     if(Distance <=4){
//         Steps=(Distance/4);
//         Distance=(Distance % Steps);
//     }
//     if(Distance <=3){
//         Steps=(Distance/3);
//         Distance=(Distance % Steps);
//     }
//     if(Distance <=2){
//         Steps=(Distance/2);
//         Distance=(Distance % Steps);
//     }
//     if(Distance <=1){
//         Steps=(Distance/1);
//         Distance=(Distance % Steps);
//     }

//     cout<<Steps;
}