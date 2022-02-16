/* Problem -
https://binarysearch.com/problems/Collecting-Coins

Q. You are given a two-dimensional integer matrix where 
   each cell represents number of coins in that cell. 
   Assuming we start at matrix[0][0], and can only move right or down, 
   find the maximum number of coins you can collect by the bottom right corner.
*/

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> v(n+1, vector<int>(m+1, 0));
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            v[i][j] = max(v[i-1][j], v[i][j-1]) + matrix[i-1][j-1];
        }
    }
    return v[n][m];
}
