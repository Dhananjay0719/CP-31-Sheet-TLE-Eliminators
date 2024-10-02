#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    string s[n];
    for(int i=0;i<n;i++){
    
    cin>>s[i];
    
    }
    for(int i=0;i<n;i++){
    string temp="";
    if(s[i].length()>10){
    temp=temp+s[i][0];
    temp=temp+to_string(s[i].length()-2);
    temp=temp+s[i][s[i].length()-1];
    s[i]=temp;
    }
    }
    
   for(int i=0;i<n;i++){
   cout<<s[i]<<endl;
   }
    
    return 0;
}
