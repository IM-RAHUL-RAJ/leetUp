#include<bits/stdc++.h>
class Solution {
public:
    void recursiveApproach(vector<char>&s,int i,int j){
        if(i>j){
            return;
        }
        swap(s[i],s[j]);
        i++;j--;
        recursiveApproach(s,i,j);
    }
    void reverseString(vector<char>& s) {
        int n=s.size();
        recursiveApproach(s,0,n-1);
    }
    
};