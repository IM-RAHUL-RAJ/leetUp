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
//         vector<vector<int>>v;
//         if(root==NULL) return v;
//         // vector<int>ans;
//         queue<int>q;
        
//         q.push(root->val);
//         int f=0;
//         vector<int>temp;
//         while(!q.empty()){
            
//             int sz=q.size();
//             while(sz--){
//                 int x=q.front();
//                 q.pop();
//                 //temp.push_back(x);
//                 if(root->left!=NULL) {q.push(root->left->val);}
//                 if(root->right!=NULL){ q.push(root->right->val);}
//                 temp.push_back(x);
                
//             }
//             if(f%2!=0) {reverse(temp.begin(),temp.end());}
        
//             v.push_back(temp);
//             temp.clear();
            
//             f++;
//         }
        
//         return v;
       vector<vector<int>> ans1;
        if(root == NULL)
            return ans1;
        
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> ans2(size);
            
            //level process
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                int index = leftToRight ? i : size - i - 1;
                ans2[index] = temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            //direction reversal
            leftToRight = !leftToRight;
            ans1.push_back(ans2);
        }
        return ans1;
        
    }
};