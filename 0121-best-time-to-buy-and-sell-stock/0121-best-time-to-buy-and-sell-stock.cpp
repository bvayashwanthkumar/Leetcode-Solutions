class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                if(index < prices[i]-min){
                    index=prices[i]-min;
                                    }
            }
        }
        return index;
    }
};