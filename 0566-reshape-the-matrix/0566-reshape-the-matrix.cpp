class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        vector<int>rows;
        if(r*c!=mat.size()*mat[0].size())return mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){

                rows.push_back(mat[i][j]);

                if(rows.size()==c){
                    ans.push_back(rows);
                    rows={};
                }

            }
        }
        return ans;
    }
};