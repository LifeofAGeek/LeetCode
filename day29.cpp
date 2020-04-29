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
    int max_sum;
    int maxPathSum(TreeNode* root) {
        max_sum=INT_MIN;
        max_gain(root);
        return max_sum;
    }
    
    int max_gain(TreeNode* root)
    {
        if(root==NULL) return 0;
        
        int leftSum=max(max_gain(root->left),0);
        int rightSum=max(max_gain(root->right),0);
        int sum=root->val + leftSum + rightSum;
        max_sum=max(sum,max_sum);
        return root->val + max(leftSum,rightSum);
    }
};
