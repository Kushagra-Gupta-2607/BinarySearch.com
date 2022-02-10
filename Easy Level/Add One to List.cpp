/* Problem - 
https://binarysearch.com/problems/Add-One-to-List

Q. You are given a list of integers nums, representing a decimal number and nums[i] is between [0, 9].
   For example, [1, 3, 9] represents the number 139.
   Return the same list in the same representation except modified so that 1 is added to the number.
*/

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    for(int i = n-1; i>-1; i--){
        if(nums[i] != 9){
            nums[i]++;
            return nums;
        }
        nums[i] = 0;
    }
    nums[0] = 1;
    nums.push_back(0);
    return nums;
}
