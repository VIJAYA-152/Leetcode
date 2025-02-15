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
      vector<int>r;
        if(root == NULL){
            return r;
        }
        vector<int>l=inorderTraversal(root->left);
        r.insert(r.end(),l.begin(),l.end());
         r.push_back(root->val);
        vector<int>ri=inorderTraversal(root->right);
        r.insert(r.end(),ri.begin(),ri.end());
         return r;   
    }
};
 