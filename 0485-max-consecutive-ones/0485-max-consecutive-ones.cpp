class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int mx=0;
        for(int i : nums){
            if(i==1){
                count++;
                mx=max(mx,count);
            }
            else{
                count=0;
            }
        }
        return mx;
    }
};