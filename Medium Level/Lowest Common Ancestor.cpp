/* Problem -
https://binarysearch.com/problems/Lowest-Common-Ancestor

Q. Given a binary tree root, and integers a and b, 
   find the value of the lowest node that has a and b as descendants. 
   A node can be a descendant of itself.

   All nodes in the tree are guaranteed to be unique.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 
#define ff first
#define ss second

pair<int, pair<bool, bool>> check(Tree* root, int a, int b){
    if(!root) return {-1, {0, 0}};
    pair<int, pair<bool, bool>> x = check(root->left, a, b), y = check(root->right, a, b);
    if(x.ss.ff && x.ss.ss) return x;
    if(y.ss.ff && y.ss.ss) return y;
    if(root->val == a)
        return {root->val, {1, x.ss.ss || y.ss.ss}};
    if(root->val == b)
        return {root->val, {x.ss.ff || y.ss.ff, 1}};
    return {root->val, {x.ss.ff || y.ss.ff, x.ss.ss || y.ss.ss}};
}

int solve(Tree* root, int a, int b) {
    return check(root, a, b).ff;
}
