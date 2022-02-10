/* Problem - 
https://binarysearch.com/problems/123-Number-Flip

Q. You are given an integer n consisting of digits 1, 2, and 3 and you can flip one digit to a 3. Return the maximum number you can make.
*/

int solve(int n) {
    string k = to_string(n);
    for(int i = 0; i<k.size(); i++){
        if(k[i] != '3'){
            k[i] = '3';
            return stoi(k);
        }
    }
    return n;
}
