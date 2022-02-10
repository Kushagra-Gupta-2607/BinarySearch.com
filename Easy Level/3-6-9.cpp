/* Problem - 
https://binarysearch.com/problems/3-6-9

Q. Given an integer n, return a list with each number from 1 to n, 
   except if it's a multiple of 3 or has a 3, 6, or 9 in the number, 
   it should be the string "clap".

Note: return the number as a string.
*/

vector<string> solve(int n) {
    if(n<1) return {};
    vector<string> v(n);
    for(int i = 1; i<=n; i++){
        string k = to_string(i);
        if(i%3 == 0 || k.find('3') != string::npos || k.find('6') != string::npos || k.find('9') != string::npos) v[i-1] = "clap";
        else v[i-1] = k;
    }
    return v;
}
