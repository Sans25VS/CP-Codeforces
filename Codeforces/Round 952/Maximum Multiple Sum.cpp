#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxSum = 0;
        int maxI = 0;

        for (int i = 2; i <= n; i++) {
            int currentSum = 0;
            for (int j = 1; j <= n; j++) {
                if (i * j <= n) {
                    currentSum += i * j;
                } else {
                    break;  
                }
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
                maxI = i;
            }
        }
        cout << maxI << endl;  
    }
    return 0;
}
