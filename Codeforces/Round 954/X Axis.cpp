#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x1,x2,x3;
    cin>>x1>>x2 >>  x3;
    
    int a = abs(x1-x2)+abs(x1-x3)+abs(x1-x1);
    int b = abs(x2-x2)+abs(x2-x1)+abs(x2-x3);
    int c = abs(x3-x3)+abs(x3-x2)+abs(x3-x1);
    int maxi = min(a,min(b,c));

    cout <<maxi<<endl;;
}

    return 0;
}