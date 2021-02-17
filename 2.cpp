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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head;
        head = new ListNode();
        ListNode* l3 = head;
        int n, c = 0;
        while(l1 || l2 || c){
            n = 0;
            if (l1) {
                n += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                n +=l2->val;
                l2 = l2->next; 
            }
            cout << n << endl;
            l3->val = (n + c) % 10;
            if (n+c >= 10) c = 1;
            else c = 0;   
            if (l1 || l2 || c) {
                l3->next = new ListNode();
                l3 = l3->next;
            }
        }
        return head;
    }
};