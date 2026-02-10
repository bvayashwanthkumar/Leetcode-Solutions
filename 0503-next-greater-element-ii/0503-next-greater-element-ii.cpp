class Solution {
public:

    int find(int index,int value,vector<int> arr){
        int j,n=arr.size();
        for(int k=1;k<n;k++){
            j=(index+k)%n;
            if(arr[j]>value) return arr[j];
        }
        return -1;
        
    }

    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            int j=find(i,nums[i],nums);
            ans.push_back(j);
        }
        return ans;
    }
};