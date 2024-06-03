#include<bits/stdc++.h>
using namespace std;
int product(int arr[],int n){
    int ans = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    for(int i=0; i<n;i++) {
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;
        prefix = prefix*arr[i];
        suffix = suffix*arr[n-i-1];
        ans = max(ans,max(prefix,suffix));
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

cout << product(arr,n);



    return 0;
}