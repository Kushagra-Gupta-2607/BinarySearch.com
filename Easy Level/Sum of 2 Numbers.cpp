/* Problem - 
https://binarysearch.com/problems/Sum-of-Two-Numbers

Q. Given a list of numbers nums and a number k, return whether any two elements from the list add up to k. You may not use the same element twice.

Note: Numbers can be negative or 0.
*/

bool solve(vector<int>& nums, int k) {
    unordered_set<int> us;
    for(int i = 0; i<nums.size(); i++){
        if(us.count(k-nums[i])) return 1;
        us.insert(nums[i]);
    }
    return 0;
}
