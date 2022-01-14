#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        pair<int,int>p;
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<int>vt;
        vt=intervals[0];
        for(auto it: intervals){
            if(it[0]<=vt[1]){
                vt[1]=(max(it[1],vt[1]));
                
            }
            else{
                v.push_back(vt);
                vt=it;
            }
        }
        v.push_back(vt);
        return v;
    }
};