class Solution {
public:

    // int find(int i,int j, vector<int>& nums2){
        
    //     for(int k=i;k<nums2.size();k++){
    //         if(nums2[k]>j) return nums2[k];
    //     }
    //     return -1;
    // }

    // vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int> ans1;
    //     unordered_map<int,int> ans;
        
    //     for(int i=0;i<nums2.size();i++){
    //         int j=find(i,nums2[i],nums2);
    //         ans[nums2[i]]=j;
    //     }

    //     for(int i : nums1){
    //         if(ans.count(i)){
    //             ans1.push_back(ans[i]);
    //         }
    //         else{
    //             ans1.push_back(-1);
    //         }
    //     }
    //     return ans1;

    // }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top() < nums2[i]){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};