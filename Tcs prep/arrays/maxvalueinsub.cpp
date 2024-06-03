# include<bits/stdc++.h>
using namespace std;
int helper(int arr[], int n, int  k){
    // abhi yai walla coe galaat hai isse shi krna hai hmme
    
    for(int i = 0; i < n-k;i++){
        int maxeele = arr[i];
        for(int j = i; j < k ;j++){
            if(arr[i+j] > maxeele){
                maxeele = arr[i+j];
            }
        }
    
    return maxeele;
}
}



int main(){
int n,k;
cin >> n >>k;
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}
cout<< helper(arr,n,k) << endl;



    return 0;
}