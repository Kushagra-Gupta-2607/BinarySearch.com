/* Problem -
https://binarysearch.com/problems/Minimum-Updates-to-Make-Bitwise-OR-Equal-to-Target

Q. You are given three positive integers a, b and target. 
   Consider an operation where you take either a or b and update one of the bits to 1 or to 0.

   Return the minimum number of operations required to make a | b = target.
*/


int solve(int a, int b, int target) {
    int ans = 0;
    for(int i = 0; i<32; i++){
        int z = 1<<i;
        if(z>a && z>b && z>target) break;
        int p = a&z, q = b&z, r = target&z;
        if(r && !p && !q) ans++;
        else if(!r){
            if(p) ans++;
            if(q) ans++;
        }
    }
    return ans;
}
