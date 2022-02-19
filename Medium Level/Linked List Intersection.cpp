/* Problem -
https://binarysearch.com/problems/Linked-List-Intersection

Q. Given two sorted linked lists l0, and l1, return a new sorted linked list containing the intersection of the two lists.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode *res = new LLNode(-1), *temp;
    while(l0 && l1){
        if(l0->val<l1->val) l0 = l0->next;
        else if(l0->val>l1->val) l1 = l1->next;
        else{
            if(res->val == -1){
                res = new LLNode(l0->val);
                temp = res;
            }
            else{
                temp->next = new LLNode(l0->val);
                temp = temp->next;
            }
            l0 = l0->next;
            l1 = l1->next;
        }
    }
    return res->val == -1 ? NULL : res;
}
