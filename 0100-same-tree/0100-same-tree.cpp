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
    int fun(TreeNode* p, TreeNode* q){
        if(!p && !q)
            return 0;
        if((!p && q) || (p && !q)){
            return -1;
        }

        if(p->val != q->val){
            return -1;
        }

        int l = fun(p->left,q->left);
        if(l==-1)   
            return -1;
        int r = fun(p->right,q->right);
        if(r==-1)
            return -1;
       
        return 0;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((!p && q) || (p && !q)){
            return false;
        }
        if(!p && !q){
            return true;
        }

        int x = fun(p,q);
        if(x==-1){
            return false;
        }
        return true;
    }
};