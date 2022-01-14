class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //xor method
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res;
        int i;
        for(i=0;i<(n-1);i++){
            res=nums[i]^nums[i+1];
            if(res==0){
                break;
            }
        }
        return nums[i];
       
    }
};