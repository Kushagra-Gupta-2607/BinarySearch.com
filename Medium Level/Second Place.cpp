/* Problem -
https://binarysearch.com/problems/Second-Place

Q. Given a binary tree root, return the depth of the second deepest leaf. 
   Note that if there are multiple deepest leaves, 
   the second deepest leaf is the next highest one.

   The root has a depth of 0 and you can assume the answer is guaranteed to exist for the trees given.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void check(Tree* root, int h, int& f, int & s){
    if(!root) return;
    check(root->left, h+1, f, s);
    check(root->right, h+1, f, s);
    if(!root->left && !root->right){
        if(h>f){
            s = f;
            f = h;
        }
        else if(h>s && h<f) s = h;
    }
    return;
    
}

int solve(Tree* root) {
    int f = 0, s = 0;
    check(root, 0, f, s);
    return s;
}
