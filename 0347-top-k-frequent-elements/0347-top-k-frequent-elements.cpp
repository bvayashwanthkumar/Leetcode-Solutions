class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>st;
        priority_queue<pair<int,int>>pq;
        vector<int> ans;
        for(int i : nums){
            st[i]++;
        }
        for(auto it : st){
            pq.push({it.second,it.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};