/* Problem -
https://binarysearch.com/problems/Linked-List-Folding

Q. You are given a singly linked list node containing integer values. 
   Take the first half of the linked list and fold over the second half and 
   merge the intersecting nodes by taking their sum.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    LLNode *slow = node, *fast = node;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next, fast = fast->next->next;
    }
    LLNode *res = slow, *temp = slow;
    stack<int> st;
    while(node != slow){
        st.push(node->val);
        node = node->next;
    }
    if(fast) temp = temp->next;
    while(temp){
        temp->val = temp->val+st.top();
        st.pop();
        temp = temp->next;
    }
    return res;
}
