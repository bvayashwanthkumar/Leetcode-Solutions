class Solution {
public:
    string removeStars(string s) {
       vector<char> ans;
       for(int i=0;i<s.size();i++){
        if(s[i]=='*'){
           if(!ans.empty())ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
       }
       return string(ans.begin(),ans.end());

    }
};