#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long sum = 0;
        long long max_elem = LLONG_MIN;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            max_elem = max(max_elem, a[i]);
            
            if (sum - max_elem == max_elem) {
                cnt++;
            }
        }
        
        if (a[0] == 0) {
            cnt = 1;
        }
        
        cout << cnt << endl;
    }

    return 0;
}
