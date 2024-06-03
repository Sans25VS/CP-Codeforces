// naive approach
/*#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n,int k){
    int max_sum = INT_MIN;
    for (int i=0;i < n-k+1;i++){
        int curr_sum = 0;
        for(int j = 0;j < k;j++){
            curr_sum = curr_sum + arr[i+j];
        }
        max_sum =max(curr_sum,max_sum);  
    }
    return max_sum;
}



int main(){

int n ,k;
cin>>n>>k;
int arr[n];
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
cout<<maxSum(arr,n,k);
    return 0;

}*/

// sliding window approach

#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n,int k){
    if(n<k){
        cout<< "INVALID";
        return -1;
    }
        int curr_sum = 0;
        for(int i = 0; i < k; i++){
    
            curr_sum += arr[i];

            int window_sum = curr_sum;
            for(int i = k ; i < n; i++){
                window_sum += arr[i] - arr[i-k];

            curr_sum = max(window_sum, curr_sum);
                   }
}
     return curr_sum;
}

int main(){

int n ,k;
cin>>n>>k;
int arr[n];
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
cout<<maxSum(arr,n,k);
    return 0;
}