/* Problem - 
https://binarysearch.com/problems/Palindromic-Anagram

Q. Given a binary tree root, return the sum of all leaves that are right children.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(root == NULL) return 0;
    int z = 0;
    if(root->right && !root->right->left && !root->right->right)    z = root->right->val;
    return z + solve(root->left) + solve(root->right);
}
