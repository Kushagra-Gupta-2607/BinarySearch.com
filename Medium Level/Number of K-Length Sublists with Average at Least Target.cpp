/* Problem -
https://binarysearch.com/problems/Number-of-K-Length-Sublists-with-Average-at-Least-Target

Q. Given a list of integers nums, and integers k and target, return the number of sublists whose length is k and its average value ≥ target.

Intuition : Prefix Sum
*/

int solve(vector<int>& nums, int k, int target) {
    int n = nums.size(), check = 0, z = 0, ans = 0;
    for(int i = 0; i<k; i++){
        check+=nums[i];
    }
    for(int i = k; i<n; i++){
        if(check/k>=target) ans++;
        check = check - nums[z++] + nums[i];
    }
    if(check/k>=target) ans++;
    return ans;
}
