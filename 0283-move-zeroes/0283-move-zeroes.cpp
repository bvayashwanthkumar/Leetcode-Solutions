class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pass=0,index=0;
        if(nums.size()==1)return;
        while(index<=nums.size()-1){
            if(nums.size()==pass)nums[index++]=0;
            else if(nums[pass]==0)pass++;
            else nums[index++]=nums[pass++];
        }
       
    }
};