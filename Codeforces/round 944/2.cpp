#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    sort(s.begin(), s.end());
    //for(int i = 0; i < s.length()/2;i++){
        if(s[0]  != s[s.length()-1]){
            cout << "YES" << endl;
            cout<<s. assign(s.begin(), s.end())<<endl;
        }
        else{
            cout << "NO" << endl;
        } 
    


    return 0;
}