class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        for(char s1 : s)mp[s1]++;

        for(auto it : mp)pq.push({it.second,it.first});

        string ans="";

        while(!pq.empty()){
            char t=pq.top().second;
            int f=pq.top().first;
            pq.pop();
            ans.append(f,t);
        }
        return ans;
    }
};