/*
Given a binary tree, flatten it to a linked list in-place.

For example, given the following tree:

    1
   / \
  2   5
 / \   \
3   4   6
The flattened tree should look like:

1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
*/

class Solution {
public:
    void flatten(TreeNode* root) {
        while(root){
            if(root->left)
                make_list(root);

            root=root->right;
        }
    }
    void make_list(TreeNode* root){
        TreeNode *right_take = root->right;
        TreeNode *left_take = root->left;

        while(left_take->right)
            left_take=left_take->right;

        left_take->right=right_take;
        root->right=root->left;
        root->left=NULL;
    }

};
