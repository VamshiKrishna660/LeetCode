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
public:
    void dfspre(vector<int>& res, TreeNode* root){
        if(!root){
            return;
        }
        res.push_back(root->val);
        dfspre(res,root->left);
        dfspre(res,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        dfspre(res, root);
        return res;
    }
};