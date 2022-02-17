/* Problem -
https://binarysearch.com/problems/Smallest-Intersecting-Element

Q. You are given a two-dimensional list of integers matrix 
   where each row is sorted in ascending order. 
   Return the smallest number that exists in every row. 
   If there's no solution, return -1.
*/

int solve(vector<vector<int>>& matrix) {
    unordered_map<int, int> um;
    int n = matrix.size();
    if(n == 0) return -1;
    int m = matrix[0].size(), ans = INT_MAX;
    for(int i = 0; i<n; i++){
        unordered_set<int> us;
        for(int j = 0; j<m; j++){
            if(!us.count(matrix[i][j])){
                um[matrix[i][j]]++;
                us.insert(matrix[i][j]);
            }
        }
    }
    for(auto it: um){
        if(it.second == n) ans = min(ans, it.first);
    }
    if(ans == INT_MAX) return -1;
    return ans;
}
