/* Problem -
https://binarysearch.com/problems/Minimum-Cost-Sort

Q. Given a list of integers nums, return the minimum cost of sorting the list in ascending or descending order. 
   The cost is defined as the sum of absolute differences between any element's old and new value.
*/

int solve(vector<int>& nums) {
    int n = nums.size(), x = 0, y = 0;
    vector<int> v(nums.begin(), nums.end());
    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++){
        x+=abs(nums[i]-v[i]);
        y+=abs(nums[i]-v[n-1-i]);
    }
    return min(x, y);
}
