
//Constraint  0<=data<=10000

bool checking(Node *root,int Min,int Max){
     if(root==NULL)
         return true;
     else if(root->data<=Min ||  root->data>=Max)
         return false;
     return checking(root->left,Min,root->data) && checking(root->right,root->data,Max);
}
bool checkBST(Node* root) {
	return checking(root, -1, 10001);
	}
