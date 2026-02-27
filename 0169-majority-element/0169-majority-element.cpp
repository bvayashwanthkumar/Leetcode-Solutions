class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // priority_queue<pair<int,int>>pq;
        // unordered_map<int,int>mp;
        // for(int i : nums){
        //     mp[i]++;
        // }
        // for(auto it : mp){
        //     pq.push({it.second,it.first});
        // }
        // int ans=pq.top().second;
        // return ans;

        int count=0,value=0;

        for(int i : nums){
            if(count==0)value=i;
            if(value==i)count++;
            else count--;
        }
        return value;

    }
};