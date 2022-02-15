/* Problem -
https://binarysearch.com/problems/Unlock-Rooms

Q. You are given a two-dimensional list of integers rooms. 
   Each index i in rooms represents a room and rooms[i] represents different keys to unlock other rooms.

    You are currently in an unlocked room 0 and every other room is locked. 
    Given you can move freely between unlocked rooms, return whether you can unlock every room.
*/

// I've done thie problem using a queue. Try DFS on your own, would be even shorter probably.
bool solve(vector<vector<int>>& rooms) {
    int n = rooms.size(), k = 0;
    unordered_set<int> us;
    queue<int> q;
    us.insert(0);
    for(int j = 0; j<rooms[k].size(); j++){
        q.push(rooms[k][j]);
        us.insert(rooms[k][j]);
    }
    while(!q.empty()){
        k = q.front();
        q.pop();
        for(int j = 0; j<rooms[k].size(); j++){
            if(!us.count(rooms[k][j])){
                q.push(rooms[k][j]);
                us.insert(rooms[k][j]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(us.count(i)) continue;
        return 0;
    }
    return 1;
    
}
