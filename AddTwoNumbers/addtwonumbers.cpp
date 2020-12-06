/*
You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

*/

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
        ListNode * head = new ListNode();
        ListNode *output = head; //next null
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int sum = (l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0) + carry;
            output->next = new ListNode(sum % 10); // val 7 next = null
            output = output -> next; // new head
            carry = sum / 10;
            l1 = (l1 != NULL ? l1->next : NULL);
            l2 = (l2 != NULL ? l2->next : NULL);
        }
        if(carry == 1){
            output->next = new ListNode(1);
        }
        
        return head->next;
    }
};