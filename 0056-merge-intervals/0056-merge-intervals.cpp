class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int length=intervals.size();
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        vector<int> level=intervals[0];
        for(int i=1;i<length;i++){
           if(intervals[i][0]<=level[1]){
            level[1]=max(level[1],intervals[i][1]);
           }
           else{
            ans.push_back(level);
            level=intervals[i];
           }
        }
        ans.push_back(level);
        return ans;
    }
};