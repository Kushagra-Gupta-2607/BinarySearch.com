/* Problem -
https://binarysearch.com/problems/Look-and-Say

Q. The "look and say" sequence is defined as follows: 
   beginning with the term 1, 
   each subsequent term visually describes the digits appearing in the previous term. 
   The first few terms are as follows:
   
   1
   11             <- 1 one
   21             <- 2 ones
   1211           <- 1 two, 1 one
   111221         <- 1 one, 1 two, 2 ones
   312211         <- 3 ones, 2 twos, 1 one
*/

string solve(int n) {
    string s = "1";
    for(int i = 1; i<n; i++){
        vector<pair<int, char>> v;
        int idx = -1;
        for(int j = 0; j<s.size(); j++){
            if(i == 0 || s[j] != s[j-1]){
                v.push_back({1, s[j]});
                idx++;
            }
            else v[idx].first++;
        }
        s = "";
        for(int j = 0; j<idx+1; j++){
            s = s + char('0'+v[j].first) + v[j].second;
        }
    }
    return s;
}
