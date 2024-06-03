#include <bits/stdc++.h>
using namespace std;

bool func(int n){
    if(n%8==0 && n%10!=0)
    return true;
    else return false;
}
int main() {
    long long n,cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(func(i))
        cnt++;
    }
    cout<<cnt<<endl;
}