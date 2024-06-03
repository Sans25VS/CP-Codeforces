# include<bits/stdc++.h>
using namespace std;

int main (){
    string s ;
    getline(cin,s);  
    unordered_map<char,int> m;
    for(int i = 0; i < s.length();i++){
        m[s[i]]++;
    }
    for(pair<char,int> iterator : m) {
        if (iterator.second > 1){
            cout << iterator.first << ' ' << iterator.second << endl;
        }
    }
    return 0;
}