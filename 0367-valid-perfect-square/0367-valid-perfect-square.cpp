class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int left=0,right=num/2;
        if(num<2) return true;

        while(left<=right){
            long long mid=left+(right-left)/2;

            if(mid*mid==num) return true;

            if(mid*mid > num)right=mid-1;
            else  left=mid+1;
        }
        return false;
        
    }
};