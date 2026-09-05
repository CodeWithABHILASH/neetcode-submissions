class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minvalue=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            minvalue=min(minvalue,prices[i-1]);
            maxprofit=max(maxprofit,prices[i]-minvalue);
        }
        return maxprofit;
    }
};
