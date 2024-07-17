#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

// Function to find the MEX of a given array
int findMEX(const vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}

int main() {
    int l;
    cin >> l;
    vector<int> v(l);
    for (int i = 0; i < l; i++) {
        cin >> v[i];
    }

    int originalMEX = findMEX(v);

    // To change the MEX, we need to remove all elements equal to the original MEX
    // If MEX is 0, we need to remove 0s to change it to 1.
    // If MEX is 1, we need to remove 1s to change it to 2, and so on.
    int countToRemove = count(v.begin(), v.end(), originalMEX);

    // If there are no elements equal to the MEX in the array, it's not possible to change the MEX
    if (countToRemove == 0) {
        cout << -2 << endl;
    } else {
        cout << countToRemove << endl;
    }

    return 0;
}
