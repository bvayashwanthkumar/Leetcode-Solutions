class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteriods) {
        stack<int>st;
        vector<int>ans;
        int n=asteriods.size();
        for(int i=0;i<n;i++){
            bool x=true;
            if(asteriods[i]>0){
                st.push(asteriods[i]);
                continue;
            }
            else if (asteriods[i]<0){
                while( !st.empty() && st.top()>0 && abs(asteriods[i])>st.top())st.pop();

                if(!st.empty() && st.top()>0){
                    if(st.top()==abs(asteriods[i])){
                        st.pop();
                        x=false;
                    }
                    else if(st.top()>abs(asteriods[i])) x=false;
                }
            }
            if(x)st.push(asteriods[i]);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};