#include <iostream>
#include <vector>

using namespace std;

long long max_product(vector<int>& arr, int start, int end) {
    long long max_val = -1;
    int max_idx = -1;
    for (int i = start + 1; i < end; i++) {
        long long val = (long long)(arr[i] - arr[start]) * (arr[end] - arr[i]);
        if (val > max_val) {
            max_val = val;
            max_idx = i;
        }
    }
    return max_val;
}

long long sum_of_max_products(vector<int>& arr) {
    int n = arr.size();
    long long ans = 0;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 2;
        while (j < n && arr[j] - arr[i] <= arr[j - 1] - arr[i]) {
            j++;
        }
        if (j < n) {
            ans += max_product(arr, i, j);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = sum_of_max_products(arr);
    cout << ans << endl;
    return 0;
}