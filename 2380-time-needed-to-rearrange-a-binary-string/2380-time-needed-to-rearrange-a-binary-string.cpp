class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        // int sum =stoi(s);
        int count=0;
        bool change=true;
        while(change){
            change=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                change=true;
                swap(s[i],s[i+1]);
                i++;
            }
        }

        if(change)count++;
    }
        return count;


    }
};