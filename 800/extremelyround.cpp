#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--){
    vector<int>roundn;
    for(int i=1;i<=9;i++){
        int powten=1;
        while(i*powten<=999999){
            roundn.push_back(i*powten);
            powten*=10;
        }
    }
    int n;
    cin>>n;
    sort(roundn.begin(),roundn.end());
    int count=0;
    int i=0;
    while(i<roundn.size()){
        if(roundn[i]<=n)
        count++;
        i++;
    }
    cout<<count<<endl;
    }
    return 0;
}
