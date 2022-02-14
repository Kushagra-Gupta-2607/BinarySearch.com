/* Problem -
https://binarysearch.com/problems/Number-of-Islands

Q. Given a two-dimensional integer matrix of 1s and 0s, return the number of "islands" in the matrix. 
   A 1 represents land and 0 represents water, so an island is a group of 1s that are neighboring whose perimeter is surrounded by water.

   Note: Neighbors can only be directly horizontal or vertical, not diagonal.
   
Example -
  matrix = [
      [1, 0, 0, 0, 0],
      [0, 0, 1, 1, 0],
      [0, 1, 1, 0, 0],
      [0, 0, 0, 0, 0],
      [1, 1, 0, 0, 1],
      [1, 1, 0, 0, 1]
  ]
  Answer = 4
*/

void check(vector<vector<int>>& matrix, int i, int j,vector<vector<int>>& visited){
    int n = matrix.size(), m = matrix[0].size();
    if(i<0 || j<0 || i == n || j == m || visited[i][j] || matrix[i][j] == 0) return;
    visited[i][j] = 1;
    check(matrix, i+1, j, visited);
    check(matrix, i, j+1, visited);
    check(matrix, i-1, j, visited);
    check(matrix, i, j-1, visited);
}

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = 0;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(visited[i][j] || matrix[i][j] == 0) continue;
            check(matrix, i, j, visited);
            ans++;
        }
    }
    return ans;
}

