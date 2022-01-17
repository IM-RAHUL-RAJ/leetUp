class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=1,ele;
        int n=nums.size();
        int cnt=1;ele=nums[0];
        while(i<n){
            
            if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
                if(cnt==0){
                    ele=nums[i+1];
                }
            }
            i++;
        }
        return ele;
    }
};