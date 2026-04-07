class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<char,int>freq;

        for(char c : s){
            freq[c-'a']++;
        }
        
        int mxfreq=0,mxch=0;
        for(int i=0;i<26;i++){
            if(freq[i]>mxfreq){
                mxfreq=freq[i];
                mxch=i;
            }
        }

        if(mxfreq > (n+1)/2)return "";

        string ans(n,' ');
        int index=0;

        while(freq[mxch]>0){
            ans[index]=mxch+'a';
            index+=2;
            freq[mxch]--;
        }

        for(int i=0;i<26;i++){
            while(freq[i]>0){
                if(index >=n)index=1;
                ans[index]=i+'a';
                index+=2;
                freq[i]--;
            }
        }
        return ans;
    }
    
};