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

void inorder(TreeNode* root , vector<int>&a){
    if(root == nullptr) return;
    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right , a);
}
TreeNode* manipulate(vector<int>&a , int start , int end){
    if(start > end) return nullptr ;

    int m = start+(end-start)/2;
    TreeNode* newNode = new TreeNode(a[m]);

    newNode->left = manipulate(a , start , m-1 );
    newNode->right = manipulate(a,m+1,end);

    return newNode;
}

TreeNode* balanceBST(TreeNode* root) {
    vector<int>a ;
    inorder(root,a);
    return manipulate( a,0,a.size()-1);
}


//TreeNode* balanceBST(TreeNode* root) {
//    vector<int>a ;
//    inorder(root,a);
//    int m = 0+(a.size()-0)/2;
//    TreeNode* newRoot = new TreeNode() ;
//    newRoot->val = a[m] ;
//    a.erase(a.begin()+m);
//    for (int i = 0; i < a.size() ; ++i) {
//        bool done = 0 ;
//        TreeNode* currNode = newRoot ;
//        while (!done){
//            if(a[i]>currNode->val) {
//                if(! currNode->right){
//                    TreeNode* newNode = new TreeNode(a[i]);
//                    currNode->right = newNode ;
//                    done =1 ;
//                }else{
//                    currNode = currNode->right ;
//                }
//            }else if(a[i]<newRoot->val) {
//                if(! newRoot->left){
//                    TreeNode* newNode = new TreeNode(a[i]);
//                    newRoot->left = newNode ;
//                    done  =1  ;
//                }else {
//                    currNode = currNode->left;
//                }
//            }
//        }
//    }
//    return newRoot ;
//}

int main(){
    // Creating the tree root = [1, null, 2, null, 3, null, 4]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    balanceBST(root);
    return 0 ;
}