class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=n*(n+1);
        int o=n*n;
        return gcd(e,o);
    }
};