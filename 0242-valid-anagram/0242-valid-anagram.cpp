class Solution {
public:
    bool isAnagram(string s, string t) {
        int sfreq[26]={0};
        if(t.size()>s.size() || t.size()!=s.size())return false;


        for(char c : s){
            sfreq[c-'a']++;
        }

        for(char c : t){
            if(sfreq[c-'a']==0)return false;
            else sfreq[c-'a']--;
        }
        return true;

        
    }
};