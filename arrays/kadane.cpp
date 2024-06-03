#include<bits/stdc++.h>
using namespace std;


/*int maxSum(int arr[], int n){
    int Start = 0, End = 0,maxSoFar = INT_MIN,maxStart = 0;
    for(int i = 0; i < n; i++){
        maxStart += arr[i];
        if(maxStart>maxSoFar){
            maxSoFar = maxStart;
            start = 0;
            end = i;
        }
        if(maxStart < 0){
            maxStart = 0;
            start = i+1;
        }
        
    }
    return maxSoFar;
}*/
int maxArraySum(int arr[], int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0,start = 0,end = 0,s =0;
       

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
            
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            start = i + 1;
        }
    }
    return max_so_far;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<maxArraySum(arr,n)<<endl;



return 0;
}