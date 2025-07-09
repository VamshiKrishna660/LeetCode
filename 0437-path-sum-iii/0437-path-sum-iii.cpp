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
    int c = 0;
    void fun(TreeNode* root, int targetSum, vector<int>&temp){
        if(!root){
            return;
        }
        temp.push_back(root->val);
        long long sum = 0;
        for(int i = temp.size()-1;i>=0;i--){
            sum += temp[i];
            if(sum == targetSum){
                c++;
            }
        }
        fun(root->left, targetSum, temp);
        fun(root->right, targetSum, temp);
        temp.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        fun(root, targetSum, temp);
        return c;
    }
};