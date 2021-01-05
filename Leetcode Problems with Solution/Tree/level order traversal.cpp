/*
Given a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> store;
        vector <int> temp;
        int get_height = height(root);
        for(int i=1;i<=get_height;i++){
            value_entry(root,i,temp);
            store.push_back(temp);
            temp.clear();
            temp.shrink_to_fit();
        }
        return store;
    }
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int count_left = height(root->left);
        int count_right = height(root->right);
        if(count_left>count_right)
            return count_left+1;
        else
            return count_right+1;
    }
    void value_entry(TreeNode *root, int height, vector<int> &temp){
        if(height==0 || root==NULL)
            return;
        if(height==1)
            temp.push_back(root->val);
        value_entry(root->left,height-1,temp);
        value_entry(root->right,height-1,temp);
    }

};
