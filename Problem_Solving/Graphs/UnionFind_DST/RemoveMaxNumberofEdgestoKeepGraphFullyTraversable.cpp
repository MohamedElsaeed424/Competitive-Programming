#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        class UnionFind {
            int count;
            vector<int> parent;
            vector<int> rank;

        public:
            UnionFind(int n) : count(n), parent(n+1), rank(n+1, 1) {
                for (int i = 0; i <= n; ++i) {
                    parent[i] = i;
                }
            }

            int find(int x) {
                if (parent[x] != x) {
                    parent[x] = find(parent[x]);
                }
                return parent[x];
            }

            bool unionSets(int x, int y) {
                int rootX = find(x);
                int rootY = find(y);
                if (rootX == rootY) {
                    return false;
                }
                if (rank[rootX] > rank[rootY]) {
                    parent[rootY] = rootX;
                    rank[rootX] += rank[rootY];
                } else {
                    parent[rootX] = rootY;
                    rank[rootY] += rank[rootX];
                }
                count--;
                return true;
            }

            bool isConnected() {
                return count == 1;
            }
        };
        int addedEdgesCount = 0;
        UnionFind Alice(n );
        UnionFind Bob(n );

        for (const auto& edge : edges) {
            if (edge[0] == 3) {
                if (Alice.unionSets(edge[1], edge[2]) | Bob.unionSets(edge[1], edge[2])) {
                    addedEdgesCount++;
                }
            }
        }

        for (const auto& edge : edges) {
            if (edge[0] == 1) {
                if (Alice.unionSets(edge[1], edge[2])) {
                    addedEdgesCount++;
                }
            } else if (edge[0] == 2) {
                if (Bob.unionSets(edge[1], edge[2])) {
                    addedEdgesCount++;
                }
            }
        }

        if (Alice.isConnected() && Bob.isConnected()) {
            return edges.size() - addedEdgesCount;
        }
        return -1;
    }
};
