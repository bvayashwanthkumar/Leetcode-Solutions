class Solution {
public:

    int find(int i,int j, vector<int>& nums2){
        
        for(int k=i;k<nums2.size();k++){
            if(nums2[k]>j) return nums2[k];
        }
        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        unordered_map<int,int> ans;
        
        for(int i=0;i<nums2.size();i++){
            int j=find(i,nums2[i],nums2);
            ans[nums2[i]]=j;
        }

        for(int i : nums1){
            if(ans.count(i)){
                ans1.push_back(ans[i]);
            }
            else{
                ans1.push_back(-1);
            }
        }
        return ans1;

    }
};