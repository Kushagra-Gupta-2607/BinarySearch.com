/* Problem -
https://binarysearch.com/problems/Balanced-Brackets-Sequel

Q. A distance of a lowercase alphabet character is defined to be its index (1-indexed) in the alphabet. 
   For example "a" is 1, "b" is 2 and "z" is 26. 
   The distance of a lowercase alphabet string is the sum of its character distances.

   Given two integers n and k, 
   return the lexicographically smallest lowercase alphabet string of length k whose distance is equal to n.
*/

string solve(int n, int k) {
    if(k*26<n) return "";
    string s;
    for(int i = 1; i<=k; i++){
        if(k-i+26<=n){
            s = 'z' + s;
            n-=26;
            continue;
        }
        if(k-i == n){
            while(n--) s = 'a' + s;
            return s;
        }
        s = char('a'+n-(k-i)-1) + s;
        n = k-i;
    }
    return s;
}
