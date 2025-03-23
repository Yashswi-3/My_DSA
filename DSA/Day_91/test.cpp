#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int MOD = 1e9 + 7;

        // Graph representation: adjacency list with {neighbor, time}
        vector<vector<pair<int, int>>> adj(n);
        for (auto& road : roads) {
            adj[road[0]].emplace_back(road[1], road[2]);
            adj[road[1]].emplace_back(road[0], road[2]);
        }

        // Dijkstra's Algorithm
        vector<long long> minTime(n, LLONG_MAX);
        vector<long long> ways(n, 0);

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        pq.emplace(0, 0);
        minTime[0] = 0;
        ways[0] = 1;

        while (!pq.empty()) {
            auto [time, node] = pq.top();
            pq.pop();

            if (time > minTime[node]) continue;

            for (auto& [neighbor, t] : adj[node]) {
                long long newTime = time + t;

                if (newTime < minTime[neighbor]) {
                    minTime[neighbor] = newTime;
                    ways[neighbor] = ways[node];
                    pq.emplace(newTime, neighbor);
                } 
                else if (newTime == minTime[neighbor]) {
                    ways[neighbor] = (ways[neighbor] + ways[node]) % MOD;
                }
            }
        }

        return ways[n - 1];
    }
};
