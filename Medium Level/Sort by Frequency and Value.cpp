/* Problem -
https://binarysearch.com/problems/Sort-by-Frequency-and-Value

Q. Given a list of integers nums, order nums by frequency, 
   with most frequent values coming first. 
   If there's a tie in frequency, higher valued numbers should come first.
*/

vector<int> solve(vector<int>& nums) {
    unordered_map<int, int> um;
    int n = nums.size(), k = 0;
    for(int x: nums) um[x]++;
    vector<pair<int, int>> v;
    for(auto it: um){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    for(int i = 0; i<n; i++){
        if(v[k].first == 0) k++;
        nums[i] = v[k].second;
        v[k].first--;
    }
    return nums;
}
