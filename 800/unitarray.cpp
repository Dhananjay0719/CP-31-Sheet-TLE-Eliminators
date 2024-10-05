#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f1=0,f2=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            f1++;
        }
        else{
            f2++;
        }
    }
    if(f1>=f2){
        if(f2%2==1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        int minop=0;
        minop=f2-n/2;//make half of them +1
        f2=n/2;
        if(f2%2==1){
            cout<<minop+1<<endl;
        }
        else{
            cout<<minop<<endl;
        }
    }
}
return 0;
}
