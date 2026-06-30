class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size()-1;
        int count=0;

        while(len>=0 && s[len]==' ')len--;
        
        for(int i=len;i>=0;i--){
            if(s[i]==' ')break;
            count++;
        }
        return count;
    }
};