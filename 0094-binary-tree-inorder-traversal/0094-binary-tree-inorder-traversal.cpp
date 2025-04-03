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
    vector<int> inorderTraversal(TreeNode* root) {
        // Performing without recursion using stack data structure
        // dfs traversal with Stack

        stack<TreeNode*>stk;
        vector<int>res;
        TreeNode* node = root;
        while(true){
            if(node != nullptr){
                stk.push(node);
                node = node->left;
            }
            else{
                if(stk.empty()){
                    break;
                }
                node = stk.top();
                stk.pop();
                res.push_back(node->val);
                node = node->right;
            }
        }
        return res;
    }
};