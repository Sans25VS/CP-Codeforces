#include <bits/stdc++.h>
using namespace std;
char maxcharacter(string s){
    unordered_map<char,int> m;
    for(int i = 0; i < s.length();i++){
        m[s[i]]++;
    }
    int maxi = -1;
    char ans;
    for(auto it: m){
        if(it.second > maxi){
            ans = it.first;
            maxi = it.second;
        }
    }
        return ans;
}
char mincharacter(string s){
    map<char,int> m;
    for(int i = 0; i < s.length();i++){
        m[s[i]]++;
    }
    int mini = INT_MAX;
    char ans;
    for(auto it: m){
        if(it.second < mini){
            ans = it.first;
            mini = it.second;
        }
    }
        return ans;
}


int main(){
string s;
cin >> s;
 cout << maxcharacter( s) <<mincharacter( s);
   
}
