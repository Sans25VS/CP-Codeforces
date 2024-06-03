# include<bits/stdc++.h>
using namespace std;

string UNO(string s){
    string ans = "";
    int i = 0;
    while(i < s.length() && s[i] == ' '){
        i++;
        if(i >= s.length()) break;
        int j = i + 1;
        while(j < s.length() && s[j] != ' '){
            string sub = s.substr(i, j - i);
            if(ans.length() == 0) ans = sub;
            else ans = sub + " " + ans;
            i = j+1;
    }
    }
    return ans;
}
int main (){
    string s;
    getline(cin,s);
    cout << UNO(s) << endl;
    return 0;
}