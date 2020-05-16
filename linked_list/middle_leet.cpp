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
    int count(ListNode *root)
    {
        if(root==NULL)
            return 0;
        return 1+count(root->next);
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head,*prev;
        while(fast && fast->next && fast->next->next)
        {
            prev=slow;
            slow =slow->next;
            fast = fast->next->next;
        }
        if(count(head)%2!=0)
             return slow;
        prev = slow->next;
        return prev;
    }
};


/*
Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
*/
