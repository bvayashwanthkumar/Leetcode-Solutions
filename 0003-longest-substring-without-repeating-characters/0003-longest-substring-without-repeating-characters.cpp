class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ans;
        int mx=0,left=0;
        for(int right=0;right<s.size();right++){
            if(ans.find(s[right])!=ans.end()){
              left=max(left,ans[s[right]]+1);  

            }
            ans[s[right]]=right;
           // int right=ans.size();
            mx=max(mx,right-left+1);
        }
        return mx;
    }
};