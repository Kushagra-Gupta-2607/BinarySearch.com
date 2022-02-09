/* Problem - 
https://binarysearch.com/problems/Palindromic-Anagram

Q. Given a string s, determine whether any anagram of s is a palindrome.
*/

bool solve(string s) {
    int a = 0;
    vector<int> v(26, 0);
    for(char x: s) v[x-'a']++;
    for(int x: v){
        if(x%2) a++;
    }
    return a<2;
}
