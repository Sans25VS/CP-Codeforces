#include<bits/stdc++.h>
using namespace std;
string solve(string s1, string s2) {
  unordered_map < char, int > mp;
  string ans = "";
  for (int i = 0; i < s2.length(); i++) {
    mp[s2[i]] = 1;
  }
  for (int i = 0; i < s1.length(); i++) {
    if (!mp[s1[i]]) {
      ans.push_back(s1[i]);
    }
  }
  return ans;
}
int main(){
    string s1,s2;
    getline (cin, s1);
    getline (cin, s2);
    
cout << "After removing the elements" << ' '<< solve(s1,s2);

    return 0;
}