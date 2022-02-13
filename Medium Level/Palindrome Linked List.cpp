/* Problem -
https://binarysearch.com/problems/Palindrome-Linked-List

Q. Given a singly linked list node whose values are integers, determine whether the linked list forms a palindrome.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* node) {
    LLNode* temp = node;
    vector<int> v;
    while(temp){
        v.push_back(temp->val);
        temp = temp->next;
    }
    int n = v.size();
    for(int i = 0; i<n/2; i++){
        if(v[i] != v[n-1-i]) return 0;
    }
    return 1;
}
