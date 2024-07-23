#include <vector>
#include <iostream>
using namespace std;
#include <iostream>
#include <vector>

using namespace std;

class UnionSet {
    int n;
    vector<int> parent;
    vector<int> rank;

public:
    UnionSet(int k) : n(k), parent(k), rank(k, 1) {
        for (int i = 0; i < k; ++i) {
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
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }

    void printSets() {
        for (int i = 0; i < n; ++i) {
            cout << "Element: " << i << " Parent: " << find(i) << endl;
        }
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        UnionSet us(n + 1); // +1 to accommodate 1-based index
        vector<int> deletedEdge;
        for (const auto& edge : edges) {
            if (!us.unionSets(edge[0], edge[1])) {
                deletedEdge = edge;
                break;
            }
        }
        return deletedEdge;
    }
};


int main() {
    UnionSet us(10);  // Create a union-find with 10 elements

    us.unionSets(2, 3);
    us.unionSets(4, 5);
    us.unionSets(3, 4);

    us.printSets();  // Print the current sets

    return 0;
}

