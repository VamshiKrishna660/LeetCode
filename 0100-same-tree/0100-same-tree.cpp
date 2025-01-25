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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        bool res=true;
        same(p,q,res);
        return res;
    }
private:
    void same(TreeNode* p,TreeNode* q,bool &res){
        
        if(p==nullptr && q==nullptr){
            return;
        }
        if(p==nullptr || q==nullptr || !res){
            res=false;
            return;
        }
        if(p->val!=q->val){
            res=false;
            return;
        }
            
        same(p->left,q->left,res);
        same(p->right,q->right,res);
              
    }
};