class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            int s=target-nums[i];
            if(ans.find(s)!=ans.end())return{ans[s],i};
            ans.insert({nums[i],i});
        }
        return {};
    }
};