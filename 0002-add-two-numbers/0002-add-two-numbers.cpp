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
        ListNode* l3 = new ListNode();
        ListNode* temp = l3;
        int sum, val1, val2;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){

            val1 = (l1 != nullptr) ? l1->val:0;
            val2 = (l2 != nullptr) ? l2->val:0;
            sum = val1 + val2 + temp->val;
            temp->val = sum % 10;
            carry = sum / 10;
            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }
            if(l1 != nullptr || l2 != nullptr || carry != 0){
                temp->next = new ListNode(carry);
                temp = temp->next;
            }
        }
        return l3;
    }
};