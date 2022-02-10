/* Problem - 
https://binarysearch.com/problems/3-and-7

Q. Given a positive integer n, determine whether you can make n by summing up some non-negative multiple of 3 and some non-negative multiple of 7.

Intuition -

Chicken McNugget Theorem also known as Postage Stamp Problem or Frobenius Coin Problem

For any two relatively prime numbers a, b the greatest N that cannot be represented as ax + by = N is (a*b) - a - b (where x and y both non-negative integers).
For this problem, a = 3 and b = 7 and they are relatively prime. So we know for any number bigger than 11 (3x7-3-7), the answer is true.
And for other numbers less than 11, we can check them on pen and paper.

Proof by induction -
7= 3(2)+1, so sum of 7's & 3's will be like:
7+3 = 3(3)+1:
7+3+3 = 3(4)+1;
7+7+3 = 3(5)+2;
7+7+7+3 = 3(7)+3 = 3(8) and so on......
*/

bool solve(int n) {
    if(n == 8 || n == 11) return 0;
    if(n == 3 || n>=6) return 1;
    return 0;
}
