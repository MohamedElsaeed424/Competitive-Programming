#include <vector>
#include <queue>
using namespace std ;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    queue<TreeNode*>q ;
    vector<vector<int>>ans ;
    if (root == nullptr) return ans ;
    q.push(root);
    for (int i = 0;!q.empty(); ++i) {
        vector<int>level ;
        int n =q.size() ;
        for (int j = 0; j <n ; ++j) {
            if(i%2!=0){
                level.push_back(q.front()->val);
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }else{
                level.push_back(q.front()->val);
                if(q.front()->right) q.push(q.front()->right);
                if(q.front()->left) q.push(q.front()->left);
                q.pop();
            }
        }
        ans.push_back(level);
    }
    return ans ;
}