// https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

class Solution{
   
public:
    int maxPathSum(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        if(!root->left && !root->right){
            return root->val;
        }
      
        int op1 = maxPathSum(root->left);
        int op2 = maxPathSum(root->right);
        int maxilr = max(op1,op2) + root->val;

        int LRR = root->val + op1 + op2;        
        int individual = max(root->val, max(op1,op2));
        return max(individual, max(LRR,maxilr));
    }
};
