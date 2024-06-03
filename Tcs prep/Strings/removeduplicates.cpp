#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm> // Include algorithm header for reverse function
using namespace std;

int main() {
    string s;
    getline(cin,s);
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    string ans = "";
    for (auto it : m) {
        ans += it.first;
    }
    // Reverse the string
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
