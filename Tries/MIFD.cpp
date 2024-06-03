#include <bits/stdc++.h>
using namespace std;


bool isValid(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}


void findPaths(vector<vector<int>>& pool, int x, int y, int M, int oxygen, string path, vector<string>& paths) {
    if (x == 0 && (y == 0 || y == pool.size() - 1)) {
        if (oxygen >= 0)
            paths.push_back(path);
        return;
    }

    
    int temp = pool[x][y];
    pool[x][y] = -1;

    
    int dx[] = {0, 1, -1, 0};
    int dy[] = {1, 0, 0, -1};
    char directions[] = {'R', 'D', 'U', 'L'};

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY, pool.size()) && pool[newX][newY] != -1) {
            int oxygenConsumption = temp + pool[newX][newY];
            if (oxygen - oxygenConsumption >= 0) {
                findPaths(pool, newX, newY, M, oxygen - oxygenConsumption, path + directions[i], paths);
            }
        }
    }

    // Backtrack
    pool[x][y] = temp;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> pool(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> pool[i][j];
        }
    }

    int M;
    cin >> M;

    vector<string> paths;
    findPaths(pool, 0, 0, M, M, "", paths);

    if (!paths.empty()) {
        
            cout << paths << endl;
        }
     else {
        cout << "No feasible path" << endl;
    }

    return 0;
}
