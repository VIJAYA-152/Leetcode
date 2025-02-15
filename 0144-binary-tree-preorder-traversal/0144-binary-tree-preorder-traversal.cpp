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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>r;
        if(root == NULL){
            return r;
        }
        r.push_back(root->val);
        vector<int>l=preorderTraversal(root->left);
        r.insert(r.end(),l.begin(),l.end());
        vector<int>ri=preorderTraversal(root->right);
        r.insert(r.end(),ri.begin(),ri.end());
         return r;
    }
};