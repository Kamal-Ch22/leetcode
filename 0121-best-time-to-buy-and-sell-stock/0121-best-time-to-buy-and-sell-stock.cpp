class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans=0, price=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            price=min(prices[i],price);
            ans=max(ans,prices[i]-price);
        }
        return ans;
        
    }
};