/* Problem -
https://binarysearch.com/problems/Detect-Voter-Fraud

Q. Given a two dimensional list of integers votes, 
   where each list has two elements [candidate_id, voter_id], 
   report whether any voter has voted more than once.
*/

bool solve(vector<vector<int>>& votes) {
    unordered_set<int> us;
    for(int i = 0; i<votes.size(); i++){
        if(us.count(votes[i][1])) return 1;
        us.insert(votes[i][1]);
    }
    return 0;
}
