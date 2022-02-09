/* Problem - 
https://binarysearch.com/problems/Unique-Occurrences
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
