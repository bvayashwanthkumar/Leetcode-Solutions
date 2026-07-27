class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mn=nums[0] + nums[1] + nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
           int v1=nums[i];
           int left=i+1;
           int right=nums.size()-1;
           while(left<right){
            int sum = nums[left]+nums[right]+v1;
            if(abs(sum-target)<abs(mn-target))mn=sum;
            else if(sum>target)right--;
            else left++;
           }
        }
    return mn;

    }
};