class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 69420;
        int prof = 0;
        for(int i = 0, g = prices.size(); i<g; i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            if((prices[i]-min) > prof)
            {
                prof = prices[i] - min;
            }
        }
        return prof;

    }
};
