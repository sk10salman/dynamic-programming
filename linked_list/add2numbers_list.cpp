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
    #define node ListNode
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * root = NULL, * prev = NULL, * temp = NULL;
        int sum = 0, carry = 0;
        while(l1 != NULL || l2 != NULL){
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;
            temp = new ListNode(sum);
            // first node 
            if(root == NULL) {
                root = temp;
            } else {
                prev->next = temp;
            }
            // make prev points to temp 
            prev = temp;
            
            if(l1 != NULL){
                l1 = l1->next;
            }
            if(l2 != NULL){
                l2 = l2->next;
            }
        }
        if(carry > 0){
            prev->next = new ListNode(carry);
        }
        return root;
    }
};



/*

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.



