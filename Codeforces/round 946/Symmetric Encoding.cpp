#include <bits/stdc++.h>
using namespace std;

char rev(string &t,char c){
    for(int i=0;i<t.length();i++){
        if(t[i]==c) return t[t.size()-i-1];
    }
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> c;
        for (int i = 0; i < n; i++) {
            c.insert(s[i]);
        }
        
        string t="";
        for(auto it:c){
            t.push_back(it);
        }
        vector<char> v;
        for(int i = 0; i < s.size(); i++) {
            v.push_back(rev(t,s[i]));
        }
        for(int i = 0; i < v.size(); i++) {
            cout<<v[i];
        }       
        cout <<endl;
    }
    return 0;
}
