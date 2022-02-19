/* Problem -
https://binarysearch.com/problems/Maximum-Unique-Sublist-Sum

Q. You are given a list of non-negative integers nums. 
   Return the maximum sum of a sublist in nums containing only unique values.
*/

int solve(vector<int>& nums) {
    int n = nums.size(), ans = 0, curr = 0;
    unordered_map<int, int> um;
    for(int i = 0; i<n; i++){
        if(!um.count(nums[i])){
            curr+=nums[i];
            um[nums[i]] = i;
            continue;
        }
        ans = max(ans, curr);
        curr = 0;
        i = um[nums[i]];
        um.clear();
    }
    ans = max(ans, curr);
    return ans;
}
