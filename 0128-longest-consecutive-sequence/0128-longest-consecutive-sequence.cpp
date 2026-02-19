class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mx=0;
        unordered_set<int> st(nums.begin(),nums.end());

        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int count=1;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    count++;
                }
                mx=max(mx,count);
            }
        }
        return mx;
    }
};