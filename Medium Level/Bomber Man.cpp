/* Problem -
https://binarysearch.com/problems/Bomber-Man

Q. You are given a two-dimensional integer matrix of 1s and 0s, 
   where a 1 represents a bomb and 0 represents an empty cell. 
   When a bomb explodes, all the spaces along on the same row and column are damaged. 
   Return the number of spaces you can stand in to not get damaged.
*/

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = 0;
    vector<int> r(n, 0), c(m, 0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j]) r[i] = 1, c[j] = 1;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(r[i] == 0 && c[j] == 0) ans++;
        }
    }
    return ans;
}
