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
    bool isSymmetric(TreeNode* root) {
        bool res=true;
        fun(root->left,root->right,res);
        return res;
    }
private:
    void fun(TreeNode* l,TreeNode* r,bool &res){
        if(l==nullptr && r==nullptr){
            return;
        }
        if(l==nullptr || r==nullptr){
            res=false;
            return;
        }
        if(l->val!=r->val){
            res=false;
            return;
        }
        fun(l->left,r->right,res);
        fun(l->right,r->left,res);
    }
};