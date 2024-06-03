# include <bits/stdc++.h>
using namespace std;
string removeSpecial(string s){
    string ans;
    int n = s.length();
    for(int i = 0; i < n;i++){
        int ascii = (int)s[i];
    
    if((ascii >=65 && ascii <= 90) || (ascii >=97  && ascii <= 122)){
        ans.push_back(s[i]);
    } 
    }
return ans;
}
int main(){
    string s ;
    getline(cin,s);
    cout << removeSpecial(s) << endl;
    return 0;
}