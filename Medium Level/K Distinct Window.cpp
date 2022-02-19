/* Problem -
https://binarysearch.com/problems/K-Distinct-Window

Q. Given a list of integers nums and an integer k, return a list of count of distinct numbers in each window of size k.
*/

vector<int> solve(vector<int>& nums, int k) {
    unordered_map<int, int> um;
    vector<int> v;
    for(int i = 0; i<k; i++){
        um[nums[i]]++;
    }
    for(int i = k; i<nums.size(); i++){
        v.push_back(um.size());
        um[nums[i-k]] == 1 ? um.erase(nums[i-k]) : um[nums[i-k]]--;
        um[nums[i]]++;
    }
    v.push_back(um.size());
    return v;

}
