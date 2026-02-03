class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        int i1=0,j1=0;
        while(i1<=i && j1<=j){
            if(nums1[i1]>nums2[j1]){
                ans.push_back(nums2[j1++]);
            }
            else{
                ans.push_back(nums1[i1++]);
            }
        }
        while(i1<=i)ans.push_back(nums1[i1++]);
    
        while(j1<=j)ans.push_back(nums2[j1++]);

        int index=ans.size();

        if(index%2==0) return (ans[index/2]+ans[(index/2)-1])/2.0;
        
        return (ans[index/2]);
        
        
    }
};