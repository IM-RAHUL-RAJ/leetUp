class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=-1;
        int min=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else if(prices[i]>=min){
                int res=prices[i]-min;
                if(res>profit){
                    profit=res;
                }
            }
        }
        if(profit==-1){
            return 0;
        }
        return profit;
    }
};