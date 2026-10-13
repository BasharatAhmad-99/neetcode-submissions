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
    bool check(TreeNode* &p, TreeNode* &q){
        if(p->val==q->val){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==nullptr && q!=nullptr) || (p!=nullptr && q==nullptr)){
            return false;
        }
        if(p==nullptr && q==nullptr){
            return true;
        }

        
        if(!check(p,q)){
            return false;
        }


        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
