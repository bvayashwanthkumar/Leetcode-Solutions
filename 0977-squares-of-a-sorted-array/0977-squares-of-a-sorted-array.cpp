class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        vector<int>ans(right+1);
        int index=right;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[index]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[index]=nums[right]*nums[right];
                right--;
            }
            index--;
        }
        return ans;
    }
};