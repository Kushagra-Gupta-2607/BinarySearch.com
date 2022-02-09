/* Problem -
https://binarysearch.com/problems/Balanced-Brackets

Q. You're given a string s consisting solely of "(" and ")". Return whether the parentheses are balanced.
*/

bool solve(string s) {
    int cnt = 0;
    for(char x: s){
        if(x == ')'){
            if(cnt == 0) return 0;
            cnt--;
        }
        else cnt++;
    }
    return cnt == 0;
}
// Stacks will take extra space
