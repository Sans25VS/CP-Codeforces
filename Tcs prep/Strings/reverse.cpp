# include<bits/stdc++.h>
using namespace std;
string rever(string s){
    int n = s.length();
    string ans;
    for(int i = n-1 ; i >= 0 ; i--){
        ans.push_back(s[i]);
    }
    return ans;
}
int main (){
    string s ;
    getline(cin,s);
    cout<< rever(s);
    return 0;
}