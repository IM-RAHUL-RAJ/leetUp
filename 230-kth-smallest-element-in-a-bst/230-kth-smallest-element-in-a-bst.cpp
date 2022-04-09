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
    
    void solve(TreeNode *root,vector<int>&nums){
        if(root!=NULL){
            solve(root->left,nums);
            nums.push_back(root->val);
            solve(root->right,nums);
            
        }
        return ;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>nums;
        solve(root,nums);
        if(k>nums.size()){return -1;}
        int i=0;
        for(i=0;i<k;i++){
            
        }
        return nums[i-1];
    }
};