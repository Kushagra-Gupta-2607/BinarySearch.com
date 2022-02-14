/* Problem -
https://binarysearch.com/problems/Largest-Island-Area

Q. You are given a two-dimensional integer matrix of 1s and 0s. 
   A 1 represents land and 0 represents water, 
   so an island is a group of 1s that are neighboring whose perimeter is surrounded by water. 
   You can assume that the edges of the matrix are surrounded by water.

   Return the area of the largest island in matrix.
*/

int check(vector<vector<int>>& matrix, vector<vector<int>>& visited, int i, int j){
    int n = matrix.size(), m = matrix[0].size();
    if(i<0 || j<0 || i == n || j == m || visited[i][j] || matrix[i][j] == 0) return 0;
    visited[i][j] = 1;
    int w = check(matrix, visited, i-1, j);
    int x = check(matrix, visited, i, j-1);
    int y = check(matrix, visited, i+1, j);
    int z = check(matrix, visited, i, j+1);
    return 1 + w + x + y + z;
}

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = 0;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == 0 || visited[i][j]) continue;
            ans = max(ans, check(matrix, visited, i, j));
        }
    }
    return ans;
}
