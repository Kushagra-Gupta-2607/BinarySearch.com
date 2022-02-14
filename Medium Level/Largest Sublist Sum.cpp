/* Problem -
https://binarysearch.com/problems/Largest-Sublist-Sum

Q. Given a list of integers nums, return the sum of a non-empty contiguous sublist with the largest sum

Try Kadane's algo
*/

int solve(vector<int>& nums) {
    int n = nums.size(), ans = INT_MIN, sum = 0;
    for(int i = 0; i<n; i++){
        sum+=nums[i];
        ans = max(ans, sum);
        if(sum<0) sum = 0;
    }
    return ans;
}
