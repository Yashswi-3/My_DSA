#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);

        // Build adjacency list
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        int completeCount = 0;

        // BFS to traverse components
        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;

            queue<int> q;
            q.push(i);
            visited[i] = true;

            unordered_set<int> component;
            component.insert(i);

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int neighbor : adj[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                        component.insert(neighbor);
                    }
                }
            }

            // Check if the component is complete
            bool isComplete = true;
            int size = component.size();
            
            for (int node : component) {
                if (adj[node].size() != size - 1) {
                    isComplete = false;
                    break;
                }
            }

            if (isComplete) {
                completeCount++;
            }
        }

        return completeCount;
    }
};
