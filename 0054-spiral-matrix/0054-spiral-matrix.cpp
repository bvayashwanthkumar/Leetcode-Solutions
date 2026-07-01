class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,left=0;
        int bot=matrix.size()-1;
        int right=matrix[0].size()-1;
        vector<int>ans;

        while(top<=bot && left<=right){

            for(int i=top;i<=right;i++)ans.push_back(matrix[top][i]);
            top++;

            for(int i=top;i<=bot;i++)ans.push_back(matrix[i][right]);
            right--;

            if(top<=bot){
            for(int i=right;i>=left;i--)ans.push_back(matrix[bot][i]);
            bot--;
            }

            if(left<=right){
            for(int i=bot;i>=top;i--)ans.push_back(matrix[i][left]);
            left++;
            }
        }
        return ans;
    }
};