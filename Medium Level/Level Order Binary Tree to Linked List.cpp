/* Problem -
https://binarysearch.com/problems/Level-Order-Binary-Tree-to-Linked-List

Q. Given a binary tree root, convert it to a singly linked list using level order traversal.
*/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(Tree* root) {
    LLNode *node = new LLNode(-1), *temp;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        root = q.front();
        q.pop();
        if(node->val==-1) node =temp =new LLNode(root->val);
        else{
            temp->next = new LLNode(root->val);
            temp = temp->next;
        }
        if(root->left)  q.push(root->left);
        if(root->right) q.push(root->right);
    }
    return node;
}
