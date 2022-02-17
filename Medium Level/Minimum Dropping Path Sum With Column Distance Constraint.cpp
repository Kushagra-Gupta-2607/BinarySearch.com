/* Problem -
https://binarysearch.com/problems/Minimum-Dropping-Path-Sum-With-Column-Distance-Constraint

Q. You are given a two-dimensional list of integers matrix. 
   Return the minimum sum you can get by taking a number in each row 
   with the constraint that any row-adjacent numbers can only differ in columns by at most one unit.
*/

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = INT_MAX;
    for(int i = 1; i<n; i++){
        for(int j = 0; j<m; j++){
            int x, y, z;
            x = j>0 ? matrix[i-1][j-1] : INT_MAX;
            y = j<m-1 ? matrix[i-1][j+1] : INT_MAX;
            z = matrix[i-1][j];
            matrix[i][j]+=min(x, min(y, z));
        }
    }
    for(int j = 0; j<m; j++){
        ans = min(ans, matrix[n-1][j]);
    }
    return ans;
}
