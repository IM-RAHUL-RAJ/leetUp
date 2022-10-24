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
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL) return v;
        // vector<int>ans;
        queue<TreeNode*>q;
        
        q.push(root);
        int f=0;
        
        while(!q.empty()){
            
            int sz=q.size();
            vector<int>temp;
            while(sz--){
                
                TreeNode* x=q.front();
                q.pop();
               
                if(x->left!=NULL) {q.push(x->left);}
                if(x->right!=NULL){ q.push(x->right);}
                temp.push_back(x->val);
                
            }
            if(f%2!=0) {reverse(temp.begin(),temp.end());}
        
            v.push_back(temp);
            // temp.clear();
            
            f++;
        }
        
        return v;

        
    }
};