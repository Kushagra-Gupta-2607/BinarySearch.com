/* Problem -
https://binarysearch.com/problems/Delete-Characters-to-Equalize-Strings

Q. Given two lowercase alphabet strings a and b, 
   consider an operation where we delete any character in either string. 
   Return the minimum number of operations required such that both strings are equal.
*/

int solve(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            int x = dp[i-1][j-1];
            x+= a[i-1] == b[j-1] ? 1 : 0;
            dp[i][j] = max(x, max(dp[i-1][j], dp[i][j-1]));
        }
    }
    return n+m-2*dp[n][m];
}
