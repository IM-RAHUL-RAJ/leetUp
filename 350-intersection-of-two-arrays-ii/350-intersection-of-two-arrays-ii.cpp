class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        vector<int>v;
   
        
            for(auto i:nums2){
                m[i]++;
            }
            for(auto j:nums1){
            if(m.find(j)!=m.end()){
                v.push_back(j);
                m[j]--;
                if(m[j]==0){
                    m.erase(j);
                }
                
            }
        }
        
        
        
        return v;
        
    }
};