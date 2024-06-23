#include<bits/stdc++.h>
using namespace std;

void findlongestsubsegment() {
    int x, y;
    cin >> x >> y;
    for (int bit = 0; bit <= 30; bit++) {
        if (((x >> bit) & 1) != ((y >> bit) & 1)) {
            cout << (1 << bit) << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        findlongestsubsegment();
    }
    return 0;
}
