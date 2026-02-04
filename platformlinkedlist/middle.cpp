// https://leetcode.com/problems/middle-of-the-linked-list/?difficulty=EASY&page=1
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        }
        return slow;

        // int count = 0;
        // ListNode* temp = head;
        // while (temp != NULL) {
        //     count++;
        //     temp = temp->next;
        // }
        // int mid = count / 2;  
        // temp = head;
        // for (int i = 0; i < mid; i++) {
        //     temp = temp->next;
        // }
        // return temp; 
    }
};

