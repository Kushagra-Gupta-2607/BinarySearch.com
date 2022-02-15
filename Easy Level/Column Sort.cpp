/* Problem -
https://binarysearch.com/problems/Column-Sort

Q. Given a two-dimensional integer matrix, sort each of the columns in ascending order.
*/

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    for(int i = 0; i<m; i++){
        vector<int> v(n);
        for(int j = 0; j<n; j++){
            v[j] = matrix[j][i];
        }
        sort(v.begin(), v.end());
        for(int j = 0; j<n; j++){
            matrix[j][i] = v[j];
        }
    }
    return matrix;
}
