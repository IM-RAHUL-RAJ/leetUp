class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        i=0;j=0;
        int idx;
        if(n==0){
            return;
        }
        while(i<m){
            // if(nums1[i]==0){
            //     nums1.pop_back();
            // }
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                i++;
                int k=nums2[0];
                for(j=1;j<n;j++){
                    if(k<=nums2[j]){
                        break;
                    }
                    nums2[j-1]=nums2[j];
                    
                }
                nums2[j-1]=k;
            }
            else{
                i++;
            }
        }
        j=0;
        for(i=m;i<(m+n);i++){
            nums1[i]=nums2[j];
            j++;
        }
    }
};