class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> ans;
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--){
            int s=0;
            while(!st.empty() && st.top().first<=temperatures[i]){
                
               
                st.pop();
                
            }
            if(st.empty())ans.push_back(s);
            else ans.push_back(st.top().second-i);
            st.push({temperatures[i],i});
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};