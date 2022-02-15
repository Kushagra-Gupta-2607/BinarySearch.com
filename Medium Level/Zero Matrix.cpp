/* Problem -
https://binarysearch.com/problems/Zero-Matrix

Q. Given a two-dimensional matrix of integers, for each zero in the original matrix, 
   replace all values in its row and column with zero, and return the resulting matrix.
*/

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<int> r(n, 0), c(m, 0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == 0) r[i] = c[j] = 1;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(r[i] || c[j]) matrix[i][j] = 0;
        }
    }
    return matrix;
}
