// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        	if(root == NULL){
		return NULL;
	}
	if(root->val == p->val || root->val == q->val){
		return root;
	}
    TreeNode* leftans = lowestCommonAncestor(root->left,p,q);
    TreeNode* rightans = lowestCommonAncestor(root->right,p,q);

    if(leftans && rightans){
        return root;
    }
    else if(leftans == NULL and rightans != NULL){
		return rightans;
	}
	else if(leftans != NULL and rightans == NULL){
		return leftans;
	}

return NULL;
    }
};
