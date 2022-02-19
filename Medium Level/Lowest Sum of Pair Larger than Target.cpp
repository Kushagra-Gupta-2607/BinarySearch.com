/* Problem -
https://binarysearch.com/problems/Lowest-Sum-of-Pair-Larger-than-Target

Q. You are given a list of integers nums and an integer target. 
   Return the lowest sum of pair of numbers that is greater than target. 
   You can assume that a solution exists.
*/

int solve(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), ans = INT_MAX;
    for(int i = 0; i<n-1; i++){
        int p = i+1, q = n-1, check = -1;
        while(p<=q){
            int mid = p+(q-p)/2;
            if(nums[mid]+nums[i]>target) check=mid, q=mid-1;
            else p = mid+1;
        }
        if(check != -1) ans = min(ans, nums[check]+nums[i]);
    }
    // The O(nlogn) method after sorting can be optimized to O(n). Try it.
    return ans;
}
