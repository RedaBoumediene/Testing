#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans = min(ans,arr[i]);
    }
    cout<<ans<<endl;

    return 0;
}
