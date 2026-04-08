class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string,int>mp;
        auto comp=[](pair<int,string>&a,pair<int,string>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first < b.first;
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp)>pq(comp);
        for(string i : words){
            mp[i]++;
        }
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        while(k>0){
            k--;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};