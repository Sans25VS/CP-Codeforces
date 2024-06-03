#include <bits/stdc++.h>
using namespace std;

bool found(int mat[][100], int n, int m, int target) {
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int column = mid % m;
        if (mat[row][column] == target)
            return true;
        else if (mat[row][column] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    int n, m, target;
    cin >> n >> m >> target;
    int mat[100][100]; // Assuming maximum size of matrix is 100x100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    cout << found(mat, n, m, target) << endl;
    return 0;
}
