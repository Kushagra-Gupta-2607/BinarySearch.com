/* Problem -
https://binarysearch.com/problems/Increasing-Digits

Q. Given an integer n, return the number of positive integers of length n such that the digits are strictly increasing.
*/

// The answer is effectively (9 C n) when n<=9, else it's 0.

int solve(int n) {
    
    if(n>9) return 0;
    int ans = 1;
    for(int i = 9; i>n; --i) ans*=i;
    for(int i = 1; i<=9-n; i++) ans/=i;
    return ans;

}
