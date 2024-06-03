#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c<=b || b<=c<=a || a<=d<=b || b<=d<=a ) {
        cout << "yes" <<endl;
    }
    else{
        cout << "no" << endl;
    }

    }
    return 0;
}