/* Problem - 
https://binarysearch.com/problems/Unique-Occurrences

Q. Given a list of integers nums, return whether the number of occurrences of every value in the array is unique.

Note: Numbers can be negative.
*/

bool solve(vector<int>& nums) {
    unordered_map<int, int> um;
    unordered_set<int> us;
    for(int x: nums) um[x]++;
    for(auto it: um){
        if(us.count(it.second)) return 0;
        us.insert(it.second);
    }
    return 1;
}
