/* Problem -
https://binarysearch.com/problems/Interleaved-Linked-List

Q. Given two linked lists l0 and l1, return the two linked lists interleaved, starting with l0. 
   If there are leftover nodes in a linked list, they should be added to the end.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */

// Recursive
LLNode* check(LLNode* a, LLNode* b, int i){
    if(!a) return b;
    if(!b) return a;
    if(i%2 == 0){
        b = check(a->next, b, i+1);
        a->next = b;
        return a;
    }
    a = check(a, b->next, i+1);
    b->next = a;
    return b;
}

LLNode* solve(LLNode* l0, LLNode* l1) {
    return check(l0, l1, 0);
}

// Iterative
LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode *ans = l0, *res = l0;
    int i = 0;
    while(l0 && l1){
        if(i == 0){
            ans = res = l0;
            l0 = l0->next;
            ans->next = l1;
            i = 1;
        }
        else{
            ans->next = l0;
            l0 = l0->next;
            ans = ans->next;
            ans->next = l1;
        }
        ans = ans->next;
        l1 = l1->next;
    }
    if(i && l0) ans->next = l0;
    else if(i && l1) ans->next = l1;
    return res ? res : l1;
}
