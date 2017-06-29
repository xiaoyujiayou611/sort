/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        postorder(res,root);
        return res;
         
    }
     
   void  postorder(vector<int> &r,TreeNode *root)
   {
       if(root==NULL)return;
       postorder(r,root->left);
       postorder(r,root->right);
       r.push_back(root->val);
   }
};
