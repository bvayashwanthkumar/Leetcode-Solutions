class Solution {
public:
struct cmp{
    bool operator()(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first)return a.second < b.second;
        else return a.first > b.first;
    }
};
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(!pq.empty()){
            int f=pq.top().first;
            int no=pq.top().second;

            while(f>0){
                ans.push_back(no);
                f--;
            }
            pq.pop();
        }
        return ans;
    }
};