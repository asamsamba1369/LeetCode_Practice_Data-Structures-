class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=INT_MIN;
        int minc=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minc)
            minc=prices[i];
            if(prices[i]-minc>maxp)
            maxp=prices[i]-minc;
        }
        return maxp;
    }
};