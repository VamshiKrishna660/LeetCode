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
    int maxDepth(TreeNode* root) {
        int m=0;
        int c=1;
        if(!root){
            return m;
        }
        depth(root,m,c);
        return m;
    }
private:
    void depth(TreeNode* root,int &m, int c){
        if(root==nullptr){
            c--;
            m=max(m,c);
            return;
        }
        c++;
        depth(root->left,m,c);
        depth(root->right,m,c);
    }
};