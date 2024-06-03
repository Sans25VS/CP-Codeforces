#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<char> c;
        unordered_map<char, int> charCount;
        int totalCount = 0;

        for (int i = 0; i < n; i++) {
            charCount[s[i]]++;
            c.insert(s[i]); 
        }

        if (m == 1) {
            cout << 7 - c.size() << endl;
            continue;
        }

        for (auto it : charCount) {
            if (m > it.second) {
                totalCount += m - it.second ;
            }
        }

        cout << m * (7 - c.size()) + totalCount << endl;
    }

    return 0;
}
