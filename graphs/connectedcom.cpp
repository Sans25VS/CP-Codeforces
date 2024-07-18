#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;

void dfs(int vertex) {
    if (vis[vertex]) return;
    vis[vertex] = true;
    for (int child : g[vertex]) {
        dfs(child);
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    g.resize(n);
    vis.resize(n, false);

    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;
        dfs(i);
        count++;
    }

    cout << "count: " << count << endl;
    return 0;
}
