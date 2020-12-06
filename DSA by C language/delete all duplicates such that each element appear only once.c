
//delete all duplicates such that each element appear only once

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL)
        return head;
    struct ListNode*fast=head->next,*slow=head;

    while(fast){
        if(slow->val==fast->val){
            if(slow==head){
                head=head->next;
                slow=head;
                fast=slow->next;
                }
            else{
                fast=fast->next;
                slow->next=fast;
            }
        }
        else{
            slow=fast;
            if(fast)
               fast=fast->next;
        }
    }

    return head;

}
