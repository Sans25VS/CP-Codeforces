#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int max = 15;
        if(max - 4*y > x  && 0 <= y <= 2){
            cout << "1" << endl;
        }
         if (y >= 2 && (x > max - 4*y) ){
            cout << y / 2 + 1 << endl;
            //continue;
        }
         
        if(x == 0 && y > 2){
            cout << y / 2 + y % 2 << endl;
            
        }
        if(x == 0 && y == 0){
            cout << "0" << endl;
        }



    }




    return 0;
}