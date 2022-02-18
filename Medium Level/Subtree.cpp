/* Problem -
https://binarysearch.com/problems/Subtree

Q. You are given two binary trees root, and target. 
   Return whether target is a subtree of root — that is, 
   whether there's a node in root that is identically same in values 
   and structure as root including all of its descendants.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool check(Tree* root, Tree* target){
    if(!root && !target) return 1;
    if(!root || !target) return 0;
    return root->val == target->val && check(root->left, target->left) && check(root->right, target->right);
}

bool solve(Tree* root, Tree* target) {
    if(!root) return 0;
    return check(root, target) || solve(root->left, target) || solve(root->right, target);
}
