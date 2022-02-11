/* Problem -
https://binarysearch.com/problems/Binary-Search-Tree-Iterator

Q. Implement a binary search tree iterator with the following methods:
  1.  next returns the next smallest element in the tree
  2.  hasnext returns whether there is a next element in the iterator
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class BSTIterator {
    public:
    vector<int> v;
    int curr, n;

    BSTIterator(Tree* root) {
        check(root, v);
        curr = 0, n = v.size();
    }

    void check(Tree* root, vector<int> &v){
        if(!root) return;
        check(root->left, v);
        v.push_back(root->val);
        check(root->right, v);
    }

    int next() {
        return v[curr++];
    }

    bool hasnext() {
        return curr != n;
    }
};
