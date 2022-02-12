/* Problem -
https://binarysearch.com/problems/Lone-Integer

Q. You are given a list of integers nums where each integer occurs 
   exactly three times except for one which occurs once. 
   Return the lone integer.
    
   Bonus: solve it in \mathcal{O}(1)O(1) space.
*/

int solve(vector<int>& nums) {
    vector<int> v(64, 0);
    int k = 0, ans = 0, pwr = 1;
    for(int i = 0; i<nums.size(); i++){
        while(nums[i]){
            v[k++] += nums[i]&1;
            nums[i]>>=1;
        }
        k = 0;
    }
    for(int i = 0; i<64; i++){
        if(v[i]%3) ans+=pwr;
        pwr<<=1;
    }
    return ans;
}
