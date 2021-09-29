/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *first = head, *second = head, *second_prev = head;
    for (int i = 0; i < n; i++){
        first = first->next;
    }
    if (!first){
        head = head->next;
    }
    else{
        while (first){
            first = first->next;
            if (second != head){
                second_prev = second_prev->next;
            }
            second = second->next;
        }
        second_prev->next = second->next;
    }
    return head;
}