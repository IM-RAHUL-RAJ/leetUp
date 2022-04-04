class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0;
        int last=height.size()-1;
        int max=0;
        
        while(first<=last){
        int area=(last-first)*min(height[last],height[first]);
        if(area>max){
            max=area;
        }    
        if(height[first]<=height[last]){
            first++;
        }    
            else {last--;}
        }
        return max;
    }
};