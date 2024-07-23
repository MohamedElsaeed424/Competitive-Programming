#include <queue>
#include <algorithm>
#include <string>
using namespace std ;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorder(TreeNode* root , string& s){
    if(root == nullptr) return;
    inorder(root->left,s);
    if(root->left == NULL && root->right == NULL){
        s+=root->val;
    }
    inorder(root->right , s);

}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    string s1 = "" ;
    string s2 = "" ;

    inorder(root1 ,s1);
    inorder(root2,s2);

    return s1 == s2 ;
}