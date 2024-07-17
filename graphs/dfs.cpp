#include<bits/stdc++.h>
using namespace std;

int N = 1e5; // Adjust this if needed
vector<vector<int>> g(N); // Changed to vector of vectors
vector<bool> vis(N, false); // Properly initialize the vis array

void dfs(int vertex) {
    vis[vertex] = true;
    cout << "Vertex " << vertex << endl;
    for(int child : g[vertex]) {
        if(vis[child]) continue;
        cout << "vertex " << vertex << " child " << child << endl;
        dfs(child);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    // Assuming you want to start DFS from vertex 1
    // You can start from any vertex you want
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }

    return 0;
}
+