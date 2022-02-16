/* Problem -
https://binarysearch.com/problems/Island-Shape-Perimeter

Q. Given a two-dimensional integer matrix of 1s and 0s where 
   0 represents empty cell and 1 represents a block that forms a shape, 
   return the perimeter of the shape. 
   There is guaranteed to be exactly one shape, and the shape has no holes in it.
*/

int check(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& vis){
    int n = matrix.size(), m = matrix[0].size();
    if(i<0 || j<0 || i == n || j == m || !matrix[i][j] || vis[i][j]) return 0;
    int x = 0;
    if(i>0 && matrix[i-1][j]) x++;
    if(j>0 && matrix[i][j-1]) x++;
    if(i+1<n && matrix[i+1][j]) x++;
    if(j+1<m && matrix[i][j+1]) x++;
    vis[i][j] = 1;
    return check(matrix, i-1, j, vis) + check(matrix, i, j-1, vis) + check(matrix, i+1, j, vis) + check(matrix, i, j+1, vis) + 4-x;
}

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j]) return check(matrix, i, j, vis);
        }
    }
    return 0;
}
