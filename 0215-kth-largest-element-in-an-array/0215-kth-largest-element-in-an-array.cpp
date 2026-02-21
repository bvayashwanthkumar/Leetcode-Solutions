class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> arr;
        for( int i : nums)arr.push(i);
        while(k>1){
            arr.pop();
            k--;
        }
        return arr.top();
    }
};