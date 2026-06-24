class Solution {
public:
    int maxPower(string s) {
        int c=0,maxcount=0;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1])c=0;
            else{
                c++;
                maxcount=max(c,maxcount);
            }
        }
        return maxcount+1;
            
        
    }
};