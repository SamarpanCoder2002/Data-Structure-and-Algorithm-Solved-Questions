/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
Constraints:

* The number of nodes in the tree is in the range [1, 104].
* -pow(2,31) <= Node.val <= pow(2,31) - 1
*/
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validation_checking(root,-pow(2,31)-1,pow(2,31)-1+1);
    }
    bool validation_checking(TreeNode *root, double MIN, double MAX){
        if(root==NULL)
            return true;
        if(root->val<=MIN || root->val>=MAX)
            return false;
        return(validation_checking(root->left,MIN,root->val) && validation_checking(root->right,root->val,MAX));
    }
};
