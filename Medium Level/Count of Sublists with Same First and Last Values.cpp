/* Problem -
https://binarysearch.com/problems/Count-of-Sublists-with-Same-First-and-Last-Values

Q. Given a list of integers nums, return the number of sublists where the first element and the last element have the same value.
*/

int solve(vector<int>& nums) {
    int ans = 0;
    unordered_map<int, int> um;
    for(int x: nums) um[x]++;
    for(auto it: um){
        int z = it.second;
        ans+=z*(z+1)/2;
    }
    return ans;
}
