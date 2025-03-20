#include <vector>
using namespace std;

class DSU {
public:
    vector<int> parent, rank, and_val;
    
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        and_val.resize(n, ~0); // Initialize with all bits set to 1
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }
    
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int u, int v, int w) {
        int root_u = find(u);
        int root_v = find(v);
        if (root_u == root_v) {
            and_val[root_u] &= w;
            return;
        }
        // Union by rank
        if (rank[root_u] < rank[root_v]) {
            swap(root_u, root_v);
        }
        parent[root_v] = root_u;
        and_val[root_u] &= (and_val[root_v] & w);
        if (rank[root_u] == rank[root_v])
            rank[root_u]++;
    }
};

class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        DSU dsu(n);
        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            dsu.unite(u, v, w);
        }
        vector<int> res;
        for (auto& q : query) {
            int s = q[0], t = q[1];
            int root_s = dsu.find(s);
            int root_t = dsu.find(t);
            if (root_s != root_t) {
                res.push_back(-1);
            } else {
                res.push_back(dsu.and_val[root_s]);
            }
        }
        return res;
    }
};