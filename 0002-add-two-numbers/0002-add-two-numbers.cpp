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
        
        // Dummy node helps us easily build the answer list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        int carry = 0;
        
        // Continue while either list has nodes or carry remains
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            
            int sum = carry;
            
            // Add l1 value if l1 exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            // Add l2 value if l2 exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // Current digit
            curr->next = new ListNode(sum % 10);
            
            // Carry for next position
            carry = sum / 10;
            
            curr = curr->next;
        }
        
        return dummy->next;
    }
};