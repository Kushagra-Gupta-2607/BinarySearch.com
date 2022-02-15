/* Problem -
https://binarysearch.com/problems/Largest-and-Smallest-Difference

Q. Given a list of integers nums and an integer k, 
   choose elements from nums to create a list of length k 
   such that the difference between the largest integer in the list 
   and the smallest integer is minimized. 
   Return this difference.
*/

int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int ans = nums[k-1]-nums[0];
    for(int i = 0; i<=nums.size()-k; i++){
        ans = min(ans, nums[k-1+i]-nums[i]);
    }
    return ans;
}
