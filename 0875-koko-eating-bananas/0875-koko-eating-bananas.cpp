class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        
        while(left<right){
            int sum=0;
            int mid=left+(right-left)/2;

            for(int x : piles){
                sum+=(x+mid-1)/mid;
            }
            if(sum<=h)right=mid;
            else left=mid+1;
        }
        return left;
    }
};