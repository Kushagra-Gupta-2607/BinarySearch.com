/* Problem -
https://binarysearch.com/problems/Matrix-Search-Sequel

Q. Given a two-dimensional integer matrix, 
   where every row and column is sorted in ascending order, 
   return whether an integer target exists in the matrix.

   This should be done in \mathcal{O}(n + m)O(n+m) time.
*/

bool solve(vector<vector<int>>& matrix, int target) {
    int n = matrix.size(), m = matrix[0].size();
    int i = 0, j = m-1;
    while(i<n && j>=0){
        if(matrix[i][j] == target) return 1;
        else if(matrix[i][j]<target) i++;
        else j--;
    }
    return 0;
}
