#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        // Calculate LCM
        long long x = v[0];
        for (long long i = 1; i < n; i++) {
            x = (x * v[i]) / __gcd(x, v[i]);
        }
        vector<int> coin(n);
        for (long long i = 0; i < n; i++) {
            coin[i] = x / v[i];
        }
        if (accumulate(coin.begin(), coin.end(), 0) >= x) {
            cout << "-1" << endl;
            continue;
        }
        for (auto it : coin) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
