/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 && !l2) return l1;
        ListNode* ans = new ListNode();
        ListNode* tmp = ans;
        while(l1 || l2){
            if (!l2 || (l1 && l1->val <= l2->val)){
                tmp->val = l1->val;
                l1 = l1->next;
            }
            else{
                tmp->val = l2->val;
                l2 = l2->next;
            }
            if (l1 || l2){
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
        }
        return ans;
    }
};