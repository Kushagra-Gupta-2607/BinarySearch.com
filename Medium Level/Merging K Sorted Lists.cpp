/* Problem -
https://binarysearch.com/problems/Merging-K-Sorted-Lists

Q. Given a list of sorted lists of integers, merge them into one large sorted list.
*/

vector<int> solve(vector<vector<int>>& lists) {
    map<int, int> mp;
    int cnt = 0, k = 0;
    for(int i = 0; i<lists.size(); i++){
        for(int j = 0; j<lists[i].size(); j++){
            mp[lists[i][j]]++;
            cnt++;
        }
    }
    vector<int> ans(cnt);
    for(auto it: mp){
        while(it.second) ans[k++] = it.first, it.second--;
    }
    return ans;
}
