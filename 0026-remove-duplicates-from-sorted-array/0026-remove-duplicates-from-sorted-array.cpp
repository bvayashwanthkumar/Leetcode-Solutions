class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[x]){
                

            }
            else{
                x++;
                swap(nums[i],nums[x]);
            }
            
        }
        return x+1 ;
        
    }
};