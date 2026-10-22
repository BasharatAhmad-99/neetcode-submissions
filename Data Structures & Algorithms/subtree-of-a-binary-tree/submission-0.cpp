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
    bool check(TreeNode* root,TreeNode* subroot){
        if(!root || !subroot) return root==subroot;

        if(root->val!=subroot->val) return false;
        return check(root->left,subroot->left) && check(root->right,subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;

        if(root->val==subRoot->val && (check(root,subRoot))) return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
