class Solution {
public:
    int rob(vector<int>& nums) {
        int m1=0,m2=0;
        for(int i : nums){
            int c=max(m2+i,m1);
            m2=m1;
            m1=c;
        }
        return m1;
    }
};