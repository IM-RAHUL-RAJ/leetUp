class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                idx=i-1;
                break;
            }
        }
        if(idx==-1){
            sort(nums.begin(),nums.end());
        }
        else{
            if(idx!=(n-1)){
                  for(int i=n-1;i>0;i--){
            if(nums[idx]<nums[i]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
                sort(nums.begin()+idx+1,nums.end());
            }
          
            
        }
       
        
        
    }
};