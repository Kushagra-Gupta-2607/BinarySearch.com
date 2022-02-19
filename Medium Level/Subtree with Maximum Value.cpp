/* Problem -
https://binarysearch.com/problems/Subtree-with-Maximum-Value

Q. Given a binary tree root, return the maximum sum of a subtree. 
   A subtree is defined to be some node in root including all of its descendants. 
   A subtree sum is the sum of all the node values in the subtree. 
   A subtree can be null in which case its sum is 0.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int check(Tree* root, int& ans){
    if(!root) return 0;
    int z = check(root->left, ans) + check(root->right, ans) + root->val;
    ans = max(ans, z);
    return z;
}

int solve(Tree* root) {
    int ans = 0;
    int z = check(root, ans);
    return ans;
}
