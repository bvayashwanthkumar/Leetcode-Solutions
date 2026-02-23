class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<courses.size();i++){
            pq.push({courses[i][1],courses[i][0]});
        }
        int count=0;
        int sum=0;
        priority_queue<int>dur;
        while(!pq.empty()){

           int days=pq.top().second;
           int duration =pq.top().first;
           pq.pop();

           sum+=days;
           dur.push(days);

           if(sum>duration){
            sum-=dur.top();
            dur.pop();
           }
            
            
        }
        return dur.size();
    }
};