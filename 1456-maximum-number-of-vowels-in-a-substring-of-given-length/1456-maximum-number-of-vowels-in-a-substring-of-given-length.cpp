class Solution {
public:
    int maxVowels(string s, int k) {
        int mx=0;
        unordered_set<char> st={'a','e','i','o','u'};
        for(int i=0;i<k;i++){
            if(st.find(s[i])!=st.end()){
                ++mx;
            }
        }
        int count=mx;
        for(int i=k;i<s.size();i++){
            if(st.find(s[i-k])!=st.end()) count--;
            if(st.find(s[i])!=st.end()) count++;
            mx=max(mx,count);
        }
        return mx;
    }
};