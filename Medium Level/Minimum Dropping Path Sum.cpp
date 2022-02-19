/* Problem -
https://binarysearch.com/problems/Minimum-Dropping-Path-Sum

Q. You are given a two-dimensional list of integers matrix. 
   Return the minimum sum you can get by taking a number in each row 
   with the constraint that any row-adjacent numbers cannot be in the same column.
*/

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    for(int i = 1; i<n; i++){
        int f = matrix[i-1][0], s = INT_MAX, idx = 0;
        for(int j = 1; j<m; j++){
            if(matrix[i-1][j]<=f){
                s = f;
                f = matrix[i-1][j];
                idx = j;
            }
            else if(matrix[i-1][j]<s) s = matrix[i-1][j];
        }
        for(int j = 0; j<m; j++){
            if(j == idx) matrix[i][j]+=s;
            else matrix[i][j]+=f;
        }
    }
    int ans = INT_MAX;
    for(int j = 0; j<m; j++) ans = min(ans, matrix[n-1][j]);
    return ans;
}
