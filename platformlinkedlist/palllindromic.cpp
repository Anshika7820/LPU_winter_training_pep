// https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr;
        if(fast == NULL) {  
            curr = slow;
        }else{          
            curr = slow->next;
        }
        ListNode* prev = NULL;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* temp = head;
        while(prev){
            if(temp->val != prev->val){
                return false;
            }
            temp = temp->next;
            prev = prev->next;
        }
        return true;
    }
};



