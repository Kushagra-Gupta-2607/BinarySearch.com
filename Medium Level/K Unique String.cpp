/* Problem -
https://binarysearch.com/problems/K-Unique-String

Q. Given a string s of lowercase alphabet characters, and an integer k, 
   return the minimum number of changes needed in the string 
   (one change involves changing a single character to any other character) 
   so that the resulting string has at most k distinct characters.
*/

int solve(string s, int k) {
    vector<int> v(26, 0);
    int cnt = 0, ans = 0;
    for(char x: s){
        v[x-'a']++;
        if(v[x-'a'] == 1) cnt++;
    }
    if(k>=cnt) return 0;
    sort(v.begin(), v.end());
    for(int i = 0; i<26 && k<cnt; i++){
        if(v[i] == 0) continue;
        ans+=v[i];
        cnt--;
    }
    return ans;
}
