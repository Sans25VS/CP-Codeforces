#include <iostream>
using namespace std;

void merge(int*arr, int s, int e ){

int mid = (s + e) / 2;
int len1 = mid - s + 1;
int len2 = e - mid + 1;

int*first =  new int[len1];
int*second =  new int[len2];

int startingele = s;
for(int i=0; i<len1 ;i++){

first[i] = arr[startingele++];
}

int startingele = mid+1;
for(int i=0; i<len2 ;i++){

second[i] = arr[startingele++];
}

int index1=0;
int index2=0;
int startingele = s;


while(index1<len1&&index2<len2){
    if(first[index1]<second[index2]){
        arr[startingele++]=first[index1++];
    }

    else {arr[startingele++]=second[index2++];}
}
while(index1<len1){

arr[startingele++]=first[index1++];

}
while(index2<len2){  

arr[startingele++]=second[index2++];

}
}
void mergeSort(int*arr, int s, int e){

if(s >= e) {
    
    return;
}

int mid = (s + e)/2;


mergeSort(arr, s, mid); 

mergeSort(arr, mid+1, e);

merge (arr,s, e);


}

int main()
{

int arr[5] ={ 1 ,4 ,3 ,2 ,10 ,9};
int n = 5;
mergeSort(arr , 0 ,n-1);

for(int i =0; i<n;i++){

    cout<<arr[i]<<endl;
}

return 0;
}