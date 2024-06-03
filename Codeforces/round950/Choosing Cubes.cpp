#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) { 
            cin >> v[i];
        }

        int fav = v[f - 1]; 

        sort(v.begin(), v.end(), greater<int>()); 

        
        bool foundFav = false;
        bool maybe = false;

        for (int i = k; i < n; i++) { 
            if (v[i] == fav) {
                foundFav = true;
                if (v[k] == fav && v[i-1] == v[i]) {
                    maybe = true;
                }
                break;
            }
        }

        if (foundFav) {
            if (maybe) {
                cout << "MAYBE" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
