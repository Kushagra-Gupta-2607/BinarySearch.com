/* Problem -
https://binarysearch.com/problems/Leaves-in-Same-Level

Q. Given a binary tree root, return whether all leaves are at the same level.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int h(Tree *root){
    if(!root) return 0;
    return 1 + max(h(root->left), h(root->right));
}

bool check(Tree *root, int h){
    if(!root) return 1;
    if(!root->left && !root->right){
        if(h == 1) return 1;
        return 0;
    }
    return check(root->left, h-1) && check(root->right, h-1);
}

bool solve(Tree* root) {
    return check(root, h(root));
}
