class Solution {
public:
    void solve(int index,int target,vector<vector<int>>& v,vector<int>&c,vector<int>&ans){
        if(index==c.size()){
            if(target==0){
            v.push_back(ans);
           
        }
             return;
        }
        
        
        else if(target>=c[index]){
            ans.push_back(c[index]);
            solve(index,target-c[index],v,c,ans);
            ans.pop_back();
           
            
        }
         solve(index+1,target,v,c,ans);
       
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ans;
        solve(0,target,v,candidates,ans);
        return v;
    }
};