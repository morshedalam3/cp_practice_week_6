#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
 int x;
 cin>>x;
 if(x<=15){
     if(x<=10){
         cout<<"lower double "<<endl;
     }
     else{
         cout<<"lower single"<<endl;
     }
 }
     else {
     if(x<=25){
         cout<<"upper double"<<endl;
     }
     else {
         cout<<"upper single" <<endl;
     }
 }
}
    return 0;
}