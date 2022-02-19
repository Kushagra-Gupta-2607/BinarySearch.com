/* Problem -
https://binarysearch.com/problems/Bulk-Shift-Letters

Q. You are given a lowercase alphabet string s and a list of integers shifts. 
   Each element shifts[i] means to shift the first i + 1 letters of s by shifts[i] positions. 
   Shifting a letter should wrap over "z" to "a". For example, shifting “z” by 2 results in “b”.

   Return the resulting string after applying shifts to s.
*/

string solve(string s, vector<int>& shifts) {
    int n = s.size(), curr = 0;
    for(int i = n-1; i>-1; i--){
        curr = (curr+shifts[i])%26;
        s[i] = int(s[i]-'a'+curr)%26+'a';
    }
    return s;
}
