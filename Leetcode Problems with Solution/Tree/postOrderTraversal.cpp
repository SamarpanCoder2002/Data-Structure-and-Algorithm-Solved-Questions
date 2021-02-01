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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> store;
        postOrder(root, store);
        return store;

    }
    void postOrder(TreeNode *root, vector<int> &store){
        if(root){
            postOrder(root->left, store);
            postOrder(root->right, store);
            store.push_back(root->val);
        }
    }
};
