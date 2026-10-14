class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        int first = 0 , second = 1;


        while(second < prices.size()){
            if(prices[first] < prices[second]){
                int profit = prices[second]-prices[first];
                maxProfit = max(maxProfit , profit);
            }else{
                first = second;
            }
            second++;
        }

        return maxProfit;
    }
};
