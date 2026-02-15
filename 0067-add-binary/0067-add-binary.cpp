class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1;
        int n1=b.size()-1;
        int c=0;
        string ans="";

        while(n>=0 || n1>=0 || c){
            int sum=c;
            if(n>=0)sum+=(a[n--]-'0');
            if(n1>=0)sum+=(b[n1--]-'0');
            ans.push_back((sum%2)+'0');
            c=sum/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};