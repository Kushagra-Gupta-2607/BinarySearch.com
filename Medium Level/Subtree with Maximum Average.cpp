/* Problem -
https://binarysearch.com/problems/Subtree-with-Maximum-Average

Q. Given a binary tree root, return the maximum average value of a subtree. 
   A subtree is defined to be some node in root including all of its descendants. 
   A subtree average is the sum of the node values divided by the number of nodes.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
pair<int, int> check(Tree* root, double &ans){
    if(!root) return {0, 0};
    pair<int, int> p = check(root->left, ans), q = check(root->right, ans);
    int x=p.first+q.first+root->val, y=p.second+q.second+1;
    ans = max(ans, double(x)/y);
    return {x, y};
}

double solve(Tree* root) {
    double ans = 0;
    pair<int, int> z = check(root, ans);
    return ans;
}
