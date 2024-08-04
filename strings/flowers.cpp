#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    string s;
    cin >> s;

    int left = 0, right = 0;
    int total_sum = 0;
    unordered_map<char, int> window_counts;

    while (right < n) {
        window_counts[s[right]]++;

        while (left <= right && (window_counts['R'] == window_counts['G'] || window_counts['B'] == window_counts['Y'])) {
            int curr_sum = accumulate(array.begin() + left, array.begin() + right + 1, 0);
            total_sum += curr_sum;

            window_counts[s[left]]--;
            left++;
        }

        right++;
    }

    cout << total_sum;

    return 0;
}
