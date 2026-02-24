// https://leetcode.com/problems/reverse-nodes-in-k-group/

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

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* curr=head;
        int count=0;

        while(curr!= NULL && count<k){
            curr=curr->next;
            count++;
        }

        if(count==k){
            //reverse first k node--
            ListNode* prevNode=NULL;
            ListNode* currNode=head;
            ListNode* nextNode=NULL;

            int count2=0;

            while(count2<k){
                nextNode=currNode->next;
                currNode->next=prevNode;

                prevNode=currNode;
                currNode=nextNode;
                
                count2++;
            }
            head->next=reverseKGroup(curr,k);
            return prevNode;
        }
        return head;
    }
};