#include <queue>
#include <algorithm>
using namespace std ;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxLevelSum(TreeNode* root) {
    if (!root) return -1;

    int maxLevel = 0;
    int maxSum = INT_MIN;
    int currentLevel = 0;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        int levelSum = 0;
        currentLevel++;

        for (int i = 0; i < n; ++i) {
            TreeNode* node = q.front();
            q.pop();
            levelSum += node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (levelSum > maxSum) {
            maxSum = levelSum;
            maxLevel = currentLevel;
        }
    }

    return maxLevel;
}