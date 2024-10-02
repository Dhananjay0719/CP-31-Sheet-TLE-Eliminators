#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n,0);
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
         if(a[i]==k){
          f=1;
          cout<<"YES"<<endl;
          break;
         }
         }
         if(f==0){
          cout<<"NO"<<endl;}
    }

    return 0;
}
