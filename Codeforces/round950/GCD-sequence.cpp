#include <bits/stdc++.h>
using namespace std;

bool count(int a, vector<int>& ans, int n) {
    vector<int> c;
    for(int i = 0; i < n; i++) {
        if(i == a) {
            continue;
        }
        else {
            c.push_back(ans[i]);
        }
    }
    for(int i = 0; i < c.size() - 1; i++) {
        if(c[i] > c[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        vector<int> ans(n - 1);
        for(int i = 0; i < n - 1; i++) {
            ans[i] = __gcd(v[i], v[i + 1]);
        }
        
        int a = -1;
        for(int i = 0; i < n - 1; i++) {
            if(ans[i] > ans[i + 1]) {
                a = i;
                break;
            }
        }
        
        if(a == -1) {
            cout << "YES" << endl;
        }
        else if (count(a, ans, n - 1) || count(a + 1, ans, n - 1)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
