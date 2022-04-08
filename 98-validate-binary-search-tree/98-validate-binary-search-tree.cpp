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
    
    void inorder(TreeNode *root,vector<int>&nums){
        if(root!=NULL){
            inorder(root->left,nums);
            nums.push_back(root->val);
            inorder(root->right,nums);
        }
        return;
    }
    bool isSorted(vector<int>nums){
        int flag=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) return true;
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        vector<int>nums;
        inorder(root,nums);
        bool res=isSorted(nums);
        return res;
        
    }
};