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
    vector<int> sorted;
    void Inorder(TreeNode* p, int k){
        if(p!=NULL && --k>0)
        {
        Inorder(p->left,k);
        sorted.push_back(p->val);
        Inorder(p->right,k);
        
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        Inorder(root,k);
        //for(int x:sorted) cout<<x<<" ";
        return min;
    }
};
