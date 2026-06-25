class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxPrice=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            else{
                int profit=prices[i]-minPrice;
                maxPrice=max(maxPrice,profit);
            }
        }
        return maxPrice;
    }
};