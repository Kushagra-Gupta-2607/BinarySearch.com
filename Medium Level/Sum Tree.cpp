/* Problem -
https://binarysearch.com/problems/Sum-Tree

Q. Given a binary tree root, return whether for every node in the tree other than the leaves, 
   its value is equal to the sum of its left child's value and its right child's value.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    if(!root || !root->left && !root->right) return 1;
    int x = root->left ? root->left->val : 0;
    int y = root->right ? root->right->val : 0;
    int z = root->val;
    return z == x+y && solve(root->left) && solve(root->right);
}
