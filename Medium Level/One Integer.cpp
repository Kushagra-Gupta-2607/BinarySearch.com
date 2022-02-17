/* Problem -
https://binarysearch.com/problems/One-Integer

Q. You are given a list of integers nums. 
   You can reduce the length of nums by taking any two integers, 
   removing them, and appending their sum to the end. 
   The cost of doing this is the sum of the two integers you removed.

   Return the minimum total cost of reducing nums to one integer.
*/

int solve(vector<int>& nums) {
    int ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i<nums.size(); i++) pq.push(nums[i]);
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        x+=pq.top();
        pq.pop();
        ans+=x;
        pq.push(x);
    }
    return ans;
}
