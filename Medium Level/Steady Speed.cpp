/* Problem -
https://binarysearch.com/problems/Steady-Speed

Q. You are given a list of integers positions representing 
   the position of a car at equally spaced intervals of time. 
   Return the length of the longest sublist where the car was traveling at a constant speed.
*/

int solve(vector<int>& nums) {
    int ans = 2, curr = 2;
    for(int i = 2; i<nums.size(); i++){
        if(abs(nums[i]-nums[i-1])==abs(nums[i-1]-nums[i-2]))            curr++;
        else{
            ans = max(ans, curr);
            curr = 2;
        }
    }
    ans = max(ans, curr);
    return ans;
}
