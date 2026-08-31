/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
     bool isvalid(TreeNode* root ,TreeNode *lNode, TreeNode *rNode){
        if(root == nullptr){
            return true;
        }
        if(lNode && lNode->val >= root->val){
            return false;
        }
        if(rNode && rNode->val <= root->val){
            return false;
        }
        return (isvalid(root->left , lNode , root) && isvalid(root->right , root , rNode));
        }
public:
    bool isValidBST(TreeNode* root) {
        return isvalid(root,nullptr,nullptr);
    }
};