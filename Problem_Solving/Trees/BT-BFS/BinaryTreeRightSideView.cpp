#include <vector>
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
vector<int> rightSideView(TreeNode* root) {
    vector<int>res ;
    if(!root) return res ;
    queue<TreeNode*>q ;
    q.push(root);
    while (!q.empty()){
        int n = q.size() ;
        for (int i = 0; i < n; ++i) {
            TreeNode* node = q.front() ;
            q.pop();

            if(i ==0){
                res.push_back(node->val);
            }

            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
        }
    }
    return res ;
}