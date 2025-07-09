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
    void fun(TreeNode* root, int targetSum, vector<vector<int>> &res, vector<int>&temp){
        if(!root){
            return;
        }
        temp.push_back(root->val);
        targetSum -= root->val;

        if(!root->left && !root->right && targetSum==0){
            res.push_back(temp);
        }
        fun(root->left, targetSum, res, temp);
        fun(root->right, targetSum, res, temp);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root){
            return {};
        }
        vector<vector<int>> res;
        vector<int> temp;
        fun(root, targetSum, res, temp);
        return res;
    }
};