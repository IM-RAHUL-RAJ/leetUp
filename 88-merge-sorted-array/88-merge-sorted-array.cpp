class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        i=0;j=0;
        int idx;
        // if(m==0){
        //     nums1
        // }
        if(n==0){
            return;
        }
        while(i<m){
            if(nums1[i]==0){
                idx=i;
            }
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                i++;
                sort(nums2.begin(),nums2.end());
            }
            else{
                i++;
            }
        }
        for(auto k:nums2){
            nums1[i]=k;
            i++;
        }
    }
};