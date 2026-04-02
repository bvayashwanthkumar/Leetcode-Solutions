class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        vector<int> ans(nums.size(),0);
        for(int i : nums){
            ans[i]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ans[i]>1)return i;
        }
        return 0;
    }
};