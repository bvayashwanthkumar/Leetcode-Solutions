class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int left=0,right=1;
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        while(right<n){
            if(left==right){
                right++;
                continue;
            }
            int diff=nums[right]-nums[left];
            if(abs(diff) == k){
                count++;
                int a = nums[left];
                int b = nums[right];

                while (left < n && nums[left] == a)
                    left++;

                while (right < n && nums[right] == b)
                    right++;
            }
            else if(diff>k)left++;
            else right++;
        }
        return count;
    }
};