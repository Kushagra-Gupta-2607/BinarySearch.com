/* Problem -
https://binarysearch.com/problems/Majority-Vote

Q. You are given a list of integers nums containing n integers, where each number represents a vote to a candidate.

   Return the id of the candidate that has  > floor(n/2) votes. If there's not a majority vote, return -1.

   This should be done in O(1) space.
*/

// Moore's Voting Algorithm, O(1) space
int solve(vector<int>& nums) {
    int n = nums.size(), votes = 0, cand;
    for(int i = 0; i<n; i++){
        if(votes == 0 || i == 0) cand = nums[i], votes = 1;
        else{
            if(nums[i] == cand) votes++;
            else votes--;
        }
    }
    votes = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] == cand) votes++;
    }
    if(votes>n/2) return cand;
    return -1;
}

// Maps - O(n) space
int solve(vector<int>& nums) {
    int n = nums.size()/2;
    unordered_map<int, int> um;
    for(int x: nums) um[x]++;
    for(auto it: um){
        if(it.second>n) return it.first;
    }
    return -1;
}
