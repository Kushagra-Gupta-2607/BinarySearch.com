/* Problem -
https://binarysearch.com/problems/XOR-Range-Queries

Q. You are given a list of integers nums and a two-dimensional list of integers queries. 
   Each element in queries contains [i, j] and asks what is the value of nums[i] ^ nums[i + 1] ^ ... ^ nums[j]. 
   Return a list containing the answer for each query.
*/

vector<int> solve(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    int r = queries.size();
    vector<int> v(r);
    for(int i = 1; i<n; i++) nums[i]^=nums[i-1];
    for(int i = 0; i<r; i++){
        int x = queries[i][0]>0 ? nums[queries[i][0]-1] : 0;
        v[i] = nums[queries[i][1]]^x;
    }
    return v;
}
