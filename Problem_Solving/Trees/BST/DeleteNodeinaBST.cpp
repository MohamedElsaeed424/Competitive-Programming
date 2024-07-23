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



TreeNode* searchBST(TreeNode* root,TreeNode* prev ,  int val) {
    if(!root) return nullptr ;
    if(root->val == val) return root ;
    if(root->val > val){
        return searchBST(root->left ,root ,val);
    }else{
        return searchBST(root->right,root ,val);
    }
}


TreeNode* deleteNode(TreeNode* root, int key) {
    if(!root) return nullptr ;
    TreeNode* prev = root ;
    TreeNode*node = searchBST(root ,prev , key);
    if(node->right){
        prev->right = node->right;
        if(node->left){

        }
    }


}