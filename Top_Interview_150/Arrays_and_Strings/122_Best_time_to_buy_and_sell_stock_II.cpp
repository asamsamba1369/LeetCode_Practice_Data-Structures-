class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int maxprofit=0;
       int buy=0, sell=0;
       while(buy<n && sell<n)
       {
        while(buy<n-1 && prices[buy]>prices[buy+1])
        buy++;

        sell=buy;

        while(sell<n-1 && prices[sell]<prices[sell+1])
        sell++;

        if(prices[sell]>prices[buy])
        maxprofit+=prices[sell]-prices[buy];

        buy=sell+1;
       }
       return maxprofit;
    }
};