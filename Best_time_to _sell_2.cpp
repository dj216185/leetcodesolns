class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int max_profit = 0 ;
       for(int i =1 ;i<prices.size();++i)
       {
           max_profit += max(prices[i]-prices[i-1],0);
       }
       return max_profit;
    }
};