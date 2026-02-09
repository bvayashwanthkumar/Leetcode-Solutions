class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>p1,p2;
        for(char a: s){ 
            if(a=='#'){
                if(!p1.empty()){
                    p1.pop();
                }
            }
            else{
                p1.push(a);
            }

        }
        for(char a: t){ 
            if(a=='#'){
                if(!p2.empty()){
                    p2.pop();
                }
            }
            else{
                p2.push(a);
            }


        }
        if(p1.size()!=p2.size())return false;
        while(!p1.empty() || !p2.empty()){
            if(p1.top()!=p2.top()) return false;
            p1.pop();
            p2.pop();
        }
        return true;
    }
};