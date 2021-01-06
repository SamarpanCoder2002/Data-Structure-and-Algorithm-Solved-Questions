/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Input: root = [1,null,2,3]
Output: [1,3,2]
*/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        static vector<int> temp;
        temp.clear();
        if(root==NULL)
            return temp;
        return storing(root,temp);
    }
    vector<int> storing(TreeNode *root, vector<int> &temp){
        if(root){
            storing(root->left,temp);
            temp.push_back(root->val);
            storing(root->right,temp);
        }
         return temp;
    }
};
