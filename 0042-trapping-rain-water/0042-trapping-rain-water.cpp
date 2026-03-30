class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right=height.size()-1;
        int leftmx=0,rightmx=0;
        int count=0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmx){
                    leftmx=height[left];
                }
                else{
                    count+=leftmx-height[left];
                    
                }
                left++;
            }
            else{
                if(height[right]>=rightmx){
                    rightmx=height[right];
                }
                else{
                    count+=rightmx-height[right];

                }
                right--;
            }
        }
            return count;
        
    }
};