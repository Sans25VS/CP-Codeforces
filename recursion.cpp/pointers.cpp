#include<iostream>
using namespace std;
int main(){
    int arr[10]={15,1,11,3,4,5,10,};
    int*p = &arr[0];
    cout<<"array at 0 position"<< &arr[5] + 1 << endl;   
    cout<<"array at 0 position"<< &arr[0] << endl;
cout<<"array at 0 position"<< *p << endl;
cout<<"array at 0 position"<< p << endl;
int i=3;
cout << i[arr] << endl;
cout<<"array at 0 position"<< *(p + 2) << endl;
cout<<"array at 0 position"<< *(p) + 10 << endl;
cout<<"array at 0 position"<< &(p) + 1 << endl;
    return 0;
}