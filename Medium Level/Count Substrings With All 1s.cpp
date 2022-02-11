/* Problem -
https://binarysearch.com/problems/Count-Substrings-With-All-1s

Q. You are given a string s containing "1"s and "0"s. 
   Return the number of substrings that contain only "1"s. 
   Mod the result by 10 ** 9 + 7.
*/

int solve(string s) {
    int cnt = 0, ans = 0, mod = 1e9+7;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1') cnt++;
        else if(s[i] == '0' && cnt){
            ans+=cnt*(cnt+1)/2;
            ans%=mod;
            cnt = 0;
        }
        //cout << i << " " << ans << endl;
    }
    return ans+cnt*(cnt+1)/2 % mod;
}
