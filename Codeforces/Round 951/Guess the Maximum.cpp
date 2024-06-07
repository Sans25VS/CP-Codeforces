#include<bits/stdc++.h>
using namespace std;

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
        vector<int> ans;
        for(int i = 0; i < n - 1; i++) {
               int j = i+1;
                int maxi = *max_element(v.begin() + i, v.begin() + j + 1);
                ans.push_back(maxi);
            
        }

        sort(ans.begin(), ans.end());

        cout << ans[0] - 1 << endl;
    }

    return 0;
}
