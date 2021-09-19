/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (!l1) return l2;
    if (!l2) return l1;
    struct ListNode *ans = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *l = ans;
    while (l1 || l2){
        if ( !l2 || (l1 && l1->val <= l2->val)){
            l->next = l1;
            l1 = l1->next;
        }
        else{
            l->next = l2;
            l2 = l2->next;
        }
        l = l->next;
    }
    return ans->next;
}