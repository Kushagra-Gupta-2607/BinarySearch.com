/* Problem -
https://binarysearch.com/problems/Arithmetic-Sequence-Permutation

Q. Given a list of integers nums, return whether you can rearrange the order of nums such that the difference between every consecutive two numbers is the same.
*/

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int x;
    for(int i = 1; i<nums.size(); i++){
        if(i == 1) x = nums[i]-nums[i-1];
        else{
            if(nums[i]-nums[i-1] != x) return 0;
        }
    }
    return 1;
}
