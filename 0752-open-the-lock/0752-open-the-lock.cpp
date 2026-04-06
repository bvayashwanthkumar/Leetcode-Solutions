class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(),deadends.end());
        if(dead.count("0000"))return -1;

        queue<pair<string,int>> q;
       

        q.push({"0000",0});
        dead.insert("0000");

        while(!q.empty()){
            auto[curr,step]=q.front();
            q.pop();

            if(curr==target)return step;

            for(int i=0;i<4;i++){
                string up,down;
                up=curr;
                down=curr;

                if(curr[i]=='9')up[i]='0';
                else up[i]=curr[i]+1;

                if(curr[i]=='0')down[i]='9';
                else down[i]=curr[i]-1;

                if(!dead.count(up) ){
                    q.push({up,step+1});
                    dead.insert(up);
                }

                if(!dead.count(down)){
                    q.push({down,step+1});
                    dead.insert(down);
                }

            }

        }
        return -1;
    }
};