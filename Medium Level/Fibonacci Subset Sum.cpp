/* Problem -
https://binarysearch.com/problems/Fibonacci-Subset-Sum

Q. Given an integer n, return the minimum number of Fibonacci numbers required to sum up to n.

// Zeckendorf's Theorem
*/

int solve(int n) {
    vector<int> v(2, 1);
    int i = 0, ans = 0;
    while(v[i]+v[i+1]<=n){
        v.push_back(v[i]+v[i+1]);
        i++;
    }
    i = v.size()-1;
    for(; i>-1 && n>0; i--)
        if(v[i]<=n) n-=v[i], ans++;
    return ans;
}
