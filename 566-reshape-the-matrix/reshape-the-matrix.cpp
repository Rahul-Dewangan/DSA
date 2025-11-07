class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(r, vector<int>(c, 0));
        queue<int> temp;
        if(m*n != r*c) return mat;

        for(int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                temp.push(mat[i][j]);
            }
        }
        for(int k = 0; k<r; k++){
            for(int l=0; l<c; l++){
                ans[k][l] = temp.front();
                temp.pop();
            }
        }
        return ans;
    }
};