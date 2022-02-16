/* Problem -
https://binarysearch.com/problems/Interval-Union

Q. Given a two-dimensional integer list intervals representing unsorted inclusive intervals, 
   return their union in sorted order.
*/

vector<vector<int>> solve(vector<vector<int>>& intv) {
    int n = intv.size(), st = -1, end = -1;
    sort(intv.begin(), intv.end());
    vector<vector<int>> v;
    for(int i = 0; i<n; i++){
        if(st == -1){
            st = intv[i][0], end = intv[i][1];
            continue;
        }
        if(intv[i][0]<=end) end = max(end, intv[i][1]);
        else{
            v.push_back({st, end});
            st = end = -1;
            i--;
        }
    }
    v.push_back({st, end});
    return v;
}
