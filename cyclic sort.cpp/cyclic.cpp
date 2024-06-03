void sort(arr[], int n){
int i = 0;
int n = arr.length();
while(i < n){
    int correct = arr[i] - 1;
    if(arr[i] != arr[correct]){
        swap(arr , i, correct);
    }
    else{
        i++;
    }
}

void swap( int arr[], int first ,int second) {
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
    
}
}