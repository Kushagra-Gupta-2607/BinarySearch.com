/* Problem -
https://binarysearch.com/problems/Enlarge-BST

Q. Given a binary search tree root, 
   replace every node's value v by its value plus 
   the sum of all other values in the tree that are greater than v.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void check(Tree* root, int &sum){
    if(!root) return;
    check(root->right, sum);
    sum+=root->val;
    root->val = sum;
    check(root->left, sum);
}

Tree* solve(Tree* root) {
    int sum = 0;
    check(root, sum);
    return root;
}
