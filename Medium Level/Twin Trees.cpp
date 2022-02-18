/* Problem -
https://binarysearch.com/problems/Twin-Trees

Q. Given two binary trees, root0 and root1, return whether their structure and values are equal.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root0, Tree* root1) {
    if(!root0 && !root1) return 1;
    if(!root0 || !root1) return 0;
    return root0->val == root1->val && solve(root0->left, root1->left) && solve(root0->right, root1->right);
}
