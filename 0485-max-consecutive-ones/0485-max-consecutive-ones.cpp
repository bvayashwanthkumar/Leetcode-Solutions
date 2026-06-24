class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int onecount=0;
        int c=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1)c=0;
            else{
                c++;
                onecount=max(c,onecount);
            }
        }
        return onecount;
    }
};