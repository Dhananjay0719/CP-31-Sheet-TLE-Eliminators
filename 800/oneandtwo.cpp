#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    int rcount=count(arr.begin(),arr.end(),2);
    int lcount=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==2){
            lcount++;
            rcount--;
        }
        if(lcount==rcount){
            cout<<i<<endl;
            flag=true;
            break;
        }
    }
    if(!flag)
    cout<<-1<<endl;
    }
    return 0;
}
