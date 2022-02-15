/* Problem -
https://binarysearch.com/problems/Balanced-Brackets-Sequel

Q. Given a binary search tree root containing unique values, and an integer t, 
   return the value of the inorder successor of t. That is, return the smallest value greater than t in the tree.

   Note: you can assume that the inorder successor exists.

   Bonus: solve it in \mathcal{O}(h)O(h) time and \mathcal{O}(1)O(1) space where h is the height of the tree.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int t) {
    int check = INT_MAX;
    while(root){
        if(root->val>t) check = min(check, root->val);
        if(root->val == t){
            root = root->right;
            if(root == NULL) return check;
            while(root->left != NULL) root = root->left;
            return root->val;
        }
        else if(root->val>t) root = root->left;
        else root = root->right;
    }
    return check;
}
