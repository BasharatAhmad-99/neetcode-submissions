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
        if(!root){
            return 0;
        }
        int count=1;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(q.size()>0){
            TreeNode* curr=q.front();
            q.pop();

            if(curr==nullptr){
                if(!q.empty()){
                    count+=1;
                    q.push(nullptr);
                    continue;
                }
                else{
                    break;
                }
            }
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
        }
        return count;
    }
};
