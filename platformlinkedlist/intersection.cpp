
// https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    int findLength(ListNode* head){
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=findLength(headA);
        int lenB=findLength(headB);
        ListNode* tempA=headA;
        ListNode* tempB=headB;

        int lenDiff=abs(lenA-lenB);
        if(lenB>lenA){
            while(lenDiff--){
                tempB=tempB->next;
            }
        }
        else{
            while(lenDiff--){
                tempA=tempA->next;
            }
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }


};