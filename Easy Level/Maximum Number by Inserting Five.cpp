/* Problem -
https://binarysearch.com/problems/Maximum-Number-by-Inserting-Five

Q. Given an integer n, return the maximum number you can make by inserting 5 anywhere in the number.

   Note: n can be -ve as well
*/

int solve(int n) {
    string s = to_string(n), k = "";
    int i = 0, sgn = 1;
    if(s[i] == '-'){
        k+='-';
        i++;
        sgn = 0;
    }
    while(i<s.size()){
        if(sgn == 0 && s[i]>'5' || sgn && s[i]<'5'){
            k = k + '5' + s.substr(i, s.size());
            return stoi(k);
        }
        else k+=s[i];
        i++;
    }
    return stoi(k+'5');
}
