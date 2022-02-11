/* Problem -
https://binarysearch.com/problems/Left-Side-View-of-a-Tree

Q. Given a binary tree root, return the leftmost node's value on each level of the tree.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    
    vector<int> v;
    queue<pair<Tree*, int>> q;
    q.push({root, 0});
    int x = 0;
    while(!q.empty()){
        root = q.front().first;
        int z = q.front().second;
        if(x == z){
            v.push_back(root->val);
            x++;
        }
        q.pop();
        if(root->left) q.push({root->left, z+1});
        if(root->right) q.push({root->right, z+1});
    }
    return v;
}
