/* Problem -
https://binarysearch.com/problems/Pairwise-Linked-List-Swap

Q. Given a singly linked list node, swap each pair of nodes and return the new head.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if(node == NULL || node->next == NULL) return node;
    LLNode *temp = node->next;
    node->next = solve(node->next->next);
    temp->next = node;
    return temp;
}
