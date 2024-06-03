#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int m;
        cin >> m;
        multiset<int> modifications;
        for (int i = 0; i < m; ++i) {
            int d;
            cin >> d;
            modifications.insert(d);
        }

        bool possible = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i]) continue; 
            if (modifications.find(b[i]) != modifications.end()) {
                modifications.erase(modifications.find(b[i])); 
            } else {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
