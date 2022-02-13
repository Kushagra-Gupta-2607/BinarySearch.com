/* Problem -
https://binarysearch.com/problems/Removing-Parentheses

Q. Given a string of parentheses s, return the minimum number of parentheses to be removed to make the string balanced.
*/

int solve(string s) {
    int n = s.size(), cnt = 0, ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == ')'){
            if(cnt == 0) ans++;
            else cnt--;
        }
        else cnt++;
    }
    return ans+cnt;
}
