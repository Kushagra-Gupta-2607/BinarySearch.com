/* Problem -
https://binarysearch.com/problems/Binary-Matrix-Leftmost-One

Q. You are given a two-dimensional list of integers matrix which contains 1s and 0s. 
   Given that each row is sorted in ascending order with 0s coming before 1s, 
   return the leftmost column index with the value of 1. If there's no row with a 1, return -1.
  
   Can you solve it faster than O(n*m)?
*/

/*
O(n*m)
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if(n<1) return -1;
    for(int i = 0; i<matrix[0].size(); i++){
        for(int j = 0; j<n; j++){
            if(matrix[j][i]) return i;
        }
    }
    return -1;
}
*/

// O(n+m)
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), ans = -1;
    if(!n) return -1;
    int r = 0, c = matrix[0].size()-1;
    while(r<n && c>=0){
        if(matrix[r][c]) ans = c--;
        else r++;
    }
    return ans;
}
