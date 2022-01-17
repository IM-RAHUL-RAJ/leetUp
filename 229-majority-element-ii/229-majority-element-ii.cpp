class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele1,ele2=INT_MIN;
        int cnt1=0,cnt2=0;
        int i=0;
        int j=0;
        ele1=nums[0];
        
        while(j<n){
            if(ele1!=nums[j]){
                ele2=nums[j];
                break;
            }
            j++;
        }
        
        
        while(i<n){
            if(nums[i]==ele1){
                cnt1++;
            }
            else if(nums[i]==ele2){
                cnt2++;
            }
            // else if(nums[i]!=ele1 && ele2=INT_MIN){
            //     ele2=nums[i];
            //     cnt2++;
            // }
            else if(cnt1==0){ele1=nums[i];cnt1=1;}
            else if(cnt2==0){ele2=nums[i];cnt2=1;}
            
            else if((nums[i]!=ele1) && (nums[i]!=ele2)){
                cnt1--;cnt2--;
            } 
            
            i++;
            
        }
        int num1=0,num2=0;
        for(int i=0;i<n;i++){
            if(ele1==nums[i])num1++;
                else if(ele2==nums[i])num2++;
        }
        
        vector<int>v;
        if(num1>(n/3)){
            v.push_back(ele1);
        }
        if(num2>(n/3)){
            v.push_back(ele2);
        }
        
        
        return v;
    }
};