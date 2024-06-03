#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){   
        cin>>arr[i];
    }
    int maxof = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i+1] && maxof < arr[i+1]){
            arr[i+1] = min(arr[i], arr[i+1]) + 1;
            maxof = (arr[i+1]);
        }
        else if(arr[i] < arr[i+1] && maxof > arr[i+1]){
            arr[i+1] = maxof+1;    
    }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] ;
    }
    
    return 0;

}