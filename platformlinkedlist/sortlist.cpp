// https://leetcode.com/problems/sort-list/

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head; 
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = nullptr; 
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        return merge(left, right);
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); 
        ListNode* curr = &dummy;

        while(l1!=NULL && l2!=NULL) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }

        if(l1!=NULL) curr->next=l1;
        if(l2!=NULL) curr->next=l2;

        return dummy.next;
    }
};
