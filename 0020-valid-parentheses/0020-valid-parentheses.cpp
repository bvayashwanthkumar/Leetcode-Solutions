class Solution {
public:
    bool isValid(string s) {
       stack<char> ans;
       for(char a:s){
            if(a=='(' || a=='{' || a=='[')ans.push(a);
            else if(ans.empty()) return false;
            else if ((a==')' && ans.top()=='(')||(a=='}' && ans.top()=='{') || (a==']' && ans.top()=='['))ans.pop();
            else return false;
       }
       if(ans.size()==0)return true;
       return false;
    }
};