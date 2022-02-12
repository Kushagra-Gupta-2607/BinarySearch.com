/* Problem -
https://binarysearch.com/problems/ZigZag-Path

Q. Given a binary tree root, return the longest path that alternates between going down to one child to the other child. 
   For example, it may alternate between right child, left child, right child, etc. 
   Or left child, right child, left child, etc.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int check(Tree* root, int i){
    if(!root) return 0;
    int x = check(root->left, 1), 
        y = check(root->right, 2);
    if(i == 0) return 1 + max(x, y);
    if(i == 1) return 1+y; // to the right we go
    return 1+x; // to the left we go
}

int solve(Tree* root) {
    if(!root) return 0;
    int p = solve(root->left);
    int q = solve(root->right);
    return max(check(root, 0), max(p, q));    
}
