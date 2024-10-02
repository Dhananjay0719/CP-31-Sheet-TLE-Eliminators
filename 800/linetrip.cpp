#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxfuel=a[0];
        for(int i=1;i<n;i++){
            maxfuel=max(maxfuel,a[i]-a[i-1]);
        }
        maxfuel=max(maxfuel,2*(x-a[n-1]));
        cout<<maxfuel<<endl;
    }

    return 0;
}
