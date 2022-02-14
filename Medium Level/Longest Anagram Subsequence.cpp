/* Problem -
https://binarysearch.com/problems/Longest-Anagram-Subsequence

Q. Given two lowercase alphabet strings a and b, return the length of the longest anagram subsequence.

Example -
  a = "afbc"
  b = "cxba"
  Answer = 3 ("abc")

*/

int solve(string a, string b) {
    vector<int> check(26, 0);
    int ans = 0;
    for(int i = 0; i<a.size(); i++){
        check[a[i]-'a']++;
    }
    for(int i = 0; i<b.size(); i++){
        if(check[b[i]-'a']){
            ans++;
            check[b[i]-'a']--;
        }
    }
    return ans;
}
