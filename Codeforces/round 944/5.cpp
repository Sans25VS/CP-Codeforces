#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     long long int n,k,q;
    cin>>n>>k>>q;
    int arr[k];
    int arr2[k];
    for(int i=1;i<k+1;i++){
        cin>>arr[i];
    }
    for(int j=1;j<k+1;j++){
        cin>>arr2[j];
    }
    int d;
    cin>>d;
    while(d--){
        vector<int> ans;
        for(int i = 1 ; i < k+1 ;i++){
        int speed = 0;
         arr[0] = 0;
         arr2[0] = 0;
        speed = (arr[i] - arr[i-1])/(arr2[i] - arr2[i-1]);
        ans.push_back(speed);
      }
        for(int i = 1; i < k+1;i++){
        if(d<=arr[i]){
            cout<<ans[i]*d;
        }
        }
    }

    }
    return 0;
}