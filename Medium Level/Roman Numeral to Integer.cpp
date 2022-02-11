/* Problem -
https://binarysearch.com/problems/Roman-Numeral-to-Integer

Q. Given a string numeral representing a Roman numeral, convert it to an integer.

Roman numerals contain the symbols representing values in the following list:
  "I" = 1
  "V" = 5
  "X" = 10
  "L" = 50
  "C" = 100
  "D" = 500
  "M" = 1000
Roman numerals are typically written largest to smallest, from left to right, 
and can be computed by summing up the values of all the symbols. However, 
in some cases, when a symbol of lower value is to the left of a symbol of higher value, 
then the lower value is subtracted from the higher one.

There are 6 cases where this is possible:
  When "I" is before "V", we get 4.
  When "I" is before "X", we get 9.
  When "X" is before "L", we get 40.
  When "X" is before "C", we get 90.
  When "C" is before "D", we get 400.
  When "C" is before "M", we get 900.
*/

int value(char roman) {
    if (roman == 'I')
        return 1;
    else if (roman == 'V')
        return 5;
    else if (roman == 'X')
        return 10;
    else if (roman == 'L')
        return 50;
    else if (roman == 'C')
        return 100;
    else if (roman == 'D')
        return 500;
    return 1000;
}

int solve(string numeral) {
    int n = numeral.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && 
            value(numeral[i]) < value(numeral[i + 1]))
            res -= value(numeral[i]);
        else
            res += value(numeral[i]);
    }
    return res;
}
