/* Problem -
https://binarysearch.com/problems/Integer-to-Roman-Numeral

Q. Given an integer n, return its corresponding Roman numeral.

Roman numerals contain the symbols representing values in the following list:

  "I" = 1
  "V" = 5
  "X" = 10
  "L" = 50
  "C" = 100
  "D" = 500
  "M" = 1000
  
Symbols are typically written largest to smallest, from left to right, and can be computed by summing the values of all the symbols. However, in some cases, when a symbol of lower value is to the left of a symbol of higher value, then the lower value is subtracted from the higher one.
There are 6 cases where this is possible:

  When "I" is before "V", we get 4.
  When "I" is before "X", we get 9.
  When "X" is before "L", we get 40.
  When "X" is before "C", we get 90.
  When "C" is before "D", we get 400.
  When "C" is before "M", we get 900.

Roman numerals must also follow these rules:

  No symbol is repeated more than 3 times.
  The symbols "V", "L", and "D" are not repeated.
*/

// A short and precise way
string solve(int n) {
    string m[] = {"", "M", "MM", "MMM"};
    string c[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string i[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    return m[n/1000] + c[(n%1000)/100] + x[(n%100)/10] + i[n%10];
}

// Very long method
string solve(int n) {
    int k = 0;
    string s = "";
    while(n){
        int x = n%10;
        n/=10;
        if(!x){
            k++;
            continue;
        }
        if(k == 0){
            if(x == 4) s = "IV";
            else if(x == 9) s = "IX";
            else if(x<4){
                while(x--) s+='I';
            }
            else{
                x-=5;
                s = "V";
                while(x--) s+='I';
            }
        }
        else if(k == 1){
            if(x == 4) s = "XL" + s;
            else if(x == 9) s = "XC" + s;
            else if(x<4){
                while(x--) s = 'X' + s;
            }
            else{
                x-=5;
                while(x--) s = 'X' + s;
                s = "L" + s;
            }
        }
        else if(k == 2){
            if(x == 4) s = "CD" + s;
            else if(x == 9) s = "CM" + s;
            else if(x<4){
                while(x--) s = 'C' + s;
            }
            else{
                x-=5;
                while(x--) s = 'C' + s;
                s = 'D' + s;
            }
        }
        else{
            while(x--) s = 'M' + s;
        }
        k++;
    }
    return s;
}
