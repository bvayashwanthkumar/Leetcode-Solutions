class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        stack<int> st;
        st.push(0);
        vis[0]=true;

        while(!st.empty()){
            int node=st.top();
            st.pop();

            for(auto it : rooms[node]){
                if(!vis[it]){
                    vis[it]=true;
                    st.push(it);
                }
            }

        }

        for(bool i : vis){
            if(!i)return false;
        }
        return true;
    }
};