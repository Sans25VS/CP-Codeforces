#include <bits/stdc++.h>
using namespace std;

int commonSubsegment(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    
    int maxLength = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        vector<int> a, b;
        int limit = 1000; 
        for (int i = 1; i < limit; ++i) {
            a.push_back(i ^ x);
            b.push_back(i ^ y);
        }

        int longest = commonSubsegment(a, b);
        cout  << longest << endl;
    }

    return 0;
}
