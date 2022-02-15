/* Problem -
https://binarysearch.com/problems/Tree-Pruning

Q. Given a binary tree root, prune the tree so that subtrees containing all 0s are removed.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
pair<Tree*, int> check(Tree *root, int i){
    if(!root) return {root, 0};
    pair<Tree*, int> p = check(root->left, i), q = check(root->right, i);
    root->left = p.first;
    root->right = q.first;
    int x = p.second, y = q.second, z;
    if(!x) root->left = NULL;
    if(!y) root->right = NULL;
    z = !root->val && !x && !y ? 0 : 1;
    return {root, z};
}

Tree* solve(Tree* root) {
    if(!root) return root;
    return check(root, 0).first;
}
