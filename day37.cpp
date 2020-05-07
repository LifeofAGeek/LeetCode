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
    
    TreeNode* getParent(TreeNode* root,int x)
    {
        if(root==NULL) return NULL;
        if((root->left && root->left->val==x) || (root->right && root->right->val==x)) return root;
        TreeNode* left=getParent(root->left,x);
        if(left!=NULL) return left;
        else return getParent(root->right,x);
        
    }
    
    int height(TreeNode* root,int find,int h=1)
    {
        if(root==NULL) return 0;
        if(root && root->val==find) return h;
        
        int level=height(root->left,find,h+1);
        if(level!=0) return level;
        return height(root->right,find,h+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(height(root,x)!=height(root,y)) return false;
        else {
            if(getParent(root,x)!=getParent(root,y)) return true;
            else return false;
        }
    }
};
