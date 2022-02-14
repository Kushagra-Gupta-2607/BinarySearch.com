/* Problem -
https://binarysearch.com/problems/Leftmost-Deepest-Tree-Node

Q. Given a binary tree root, find the value of the deepest node. If there's more than one deepest node, then return the leftmost one.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int height(Tree* root){
    if(!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int check(Tree* root, int k){
    if(!root) return -1;
    if(k == 1) return root->val;
    int x = check(root->left, k-1);
    if(x == -1) return check(root->right, k-1);
    return x;
}

int solve(Tree* root) {
    int k = height(root);
    return check(root, k);
}
