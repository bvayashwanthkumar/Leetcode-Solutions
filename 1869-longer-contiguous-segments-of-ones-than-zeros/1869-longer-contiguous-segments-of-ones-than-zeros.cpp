class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxone=0,maxzero=0,one=0,zero=0;
        if(s.length()==1){
            return s[0]=='1';
        }
        
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1] && s[i]=='1'){
                one++;
                maxone=max(maxone,one);
            }
            else one=0;
        
            if(s[i]==s[i+1] && s[i]=='0'){
                zero++;
                maxzero=max(maxzero,zero);
            }
            else zero=0;
            

        }
        if(maxone==maxzero)return false;
        return maxone > maxzero;
    }
};