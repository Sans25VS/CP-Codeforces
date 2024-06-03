#include<bits/stdc++.h>
using namespace std;
// isma 2 functions bnenga ekk to check krna kai liyta recursion waali condition aur ek check normal kai liya  
int converter(int n){
    if(n == 0) return 0;

    int digit = n % 10;
    if(digit == 0) 
       digit = 5;
       return converter(n/10)*10 + digit; 

}

int digitformed(int n){
    if(n == 0) return 5;
    else return converter(n);

}
int main(){
    int n ;
    cin >> n;
    cout << digitformed(n);
    return 0;
}