/* Problem -
https://binarysearch.com/problems/Largest-Anagram-Group

Q. Given a list of strings words, group all anagrams together and return the size of the largest grouping.
*/

int solve(vector<string>& words) {
    int ans = 1;
    map<vector<int>, int> mp;
    for(int i = 0; i<words.size(); i++){
        vector<int> temp(26, 0);
        for(int j = 0; j<words[i].size(); j++){
            temp[words[i][j]-'a']++;
        }
        mp[temp]++;
    }
    for(auto it: mp){
        ans = max(ans, it.second);
    }
    return ans;
}
