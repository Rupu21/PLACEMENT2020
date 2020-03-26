/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * res = new ListNode(0);   // virtual head node to simplify corner case
        ListNode * cur = res;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if (l1) 
                l1 = l1->next;
            
            if (l2) 
                l2 = l2->next;
        }
        if (carry) 
            cur->next = new ListNode(1);
        
        return res->next; 
    }
};