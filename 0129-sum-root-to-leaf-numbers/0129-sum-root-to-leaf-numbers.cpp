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
    void fun(TreeNode* root, int sum, vector<int>&vec){
        if(!root)
            return;
            
        sum = sum*10 + root->val;
        if(!root->left && !root->right){
            vec.push_back(sum);
        }
        fun(root->left, sum, vec);
        fun(root->right, sum, vec);
    }
    int sumNumbers(TreeNode* root) {
        if(!root){
            return 0;
        }
        int sum = 0;
        vector<int>vec;
        fun(root, sum, vec);
        int res = 0;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
            res += vec[i];
        }
        return res;
    }
};