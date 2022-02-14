/* Problem -
https://binarysearch.com/problems/Sum-of-the-Deepest-Nodes

Q. Given a binary tree root, find the sum of the deepest node values.
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
    return 1+max(height(root->left), height(root->right));
}

void res(Tree* root, int k, int &ans){
    if(!root) return;
    if(k == 1) ans += root->val;
    res(root->left, k-1, ans);
    res(root->right, k-1, ans);
}

int solve(Tree* root) {
    int k = height(root), ans = 0;
    res(root, k, ans);
    return ans;
}
