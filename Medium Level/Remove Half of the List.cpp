/* Problem -
https://binarysearch.com/problems/Remove-Half-of-the-List

Q. Given a list of integers nums, 
   consider an operation where you pick any number e and remove every number in nums equal to e. 
   Return the minimum number of operations required such that the length of nums is reduced by at least half.
*/

int solve(vector<int>& nums) {
    unordered_map<int, int> mp;
    int i = 0, n = nums.size(), k = 0;
    n = n%2 ? n/2+1: n/2;
    for(int x:nums) mp[x]++;
    vector<int> v(mp.size());
    for(auto it:mp){
        v[i++] = it.second;
    }
    sort(v.begin(), v.end(), greater<int>());
    i = 0;
    while(k<n){
        k+=v[i++];
    }
    return i;
}
