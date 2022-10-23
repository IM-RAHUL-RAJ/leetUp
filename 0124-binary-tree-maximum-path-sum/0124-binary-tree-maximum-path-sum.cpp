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
    
    
    int solve(TreeNode *root, int &maxi){
        if(root==NULL) return 0;
        else{
            int lsum=max(0,solve(root->left,maxi));
            int rsum=max(0,solve(root->right,maxi));
            
            int maxsum=lsum+rsum+root->val;
            
            maxi=max(maxi,maxsum);
            
            return root->val+max(lsum,rsum);
        }
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int res=solve(root,maxi);
        return maxi;
    }
};