class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=(nums[left]+nums[right]);
            if(mid==target)return{left+1,right+1};
            if(mid>target)right--;
            else left++;
        }
        return {};
    }
};