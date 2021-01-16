/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size_is = size_take(head);
        if(size_is==1){
            delete head;
            return NULL;
        }

        int target_is = size_is-n-1;
        ListNode *temp=head,*temp1;
        if(target_is<0){
            head=head->next;
            delete temp;
        }
        else{
            while(target_is){
                 temp=temp->next;
                 target_is--;
            }
            temp1=temp->next;
            temp->next=temp1->next;
            delete temp1;
        }
        return head;
    }
    int size_take(ListNode *head){
        int count=0;
        while(head){
            head=head->next;
            count+=1;
        }
        return(count);
    }
};
