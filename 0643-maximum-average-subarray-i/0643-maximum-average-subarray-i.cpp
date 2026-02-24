class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mx=0;
        double sum=0,div=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        div=sum/k;
        mx=div;

        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            div=sum/k;
            mx=max(div,mx);
        }
        return mx;

    }
};