/* Problem -
https://binarysearch.com/problems/Symmetric-Binary-Tree

Q. Given the root to a binary tree root, return whether it is symmetric.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool check(Tree *a, Tree *b){
    if(!a && !b) return 1;
    if(!a || !b) return 0;
    return a->val == b->val && check(a->left, b->right) && check(a->right, b->left);
}

bool solve(Tree* root) {
    if(!root) return 1;
    return check(root, root);
}
