#include <vector>
#include <map>
using namespace std ;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void inorder(TreeNode* root, vector<int>& a) {
    if (root == nullptr) return;
    inorder(root->left, a);
    a.push_back(root->val);
    inorder(root->right, a);
}

void manipulate(TreeNode* root, vector<int>& a, int& i) {
    if (root == nullptr) return;
    manipulate(root->left, a, i);
    root->val = a[i++];
    manipulate(root->right, a, i);
}

TreeNode* bstToGst(TreeNode* root) {
    vector<int> a;
    inorder(root, a);
    int n = a.size();
    for (int i = n - 2; i >= 0; --i) {
        a[i] += a[i + 1];
    }
    int index = 0;
    manipulate(root, a, index);
    return root;
}
