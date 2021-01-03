
// Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteFirst(struct ListNode* head){
    struct ListNode*fast=head->next,*slow=head;
    if(fast){
        while(fast->val==slow->val){
            slow=fast;
            fast=fast->next;
            if(fast==NULL)
               break;
        }
    head=slow->next;
    }
    return head;
}

struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL || head->next==NULL)
        return head;
    struct ListNode*fast=head->next,*slow=head;
    while(fast->val==slow->val){
        head=deleteFirst(head);
        if(head==NULL || head->next==NULL)
            return head;
        fast=head->next;
        slow=head;
        }

    while(fast){
        if(fast==NULL || fast->next==NULL)
            return(head);
        if(fast->next->val==fast->val){
            while(fast->next && fast->next->val==fast->val)
                fast=fast->next;
            fast=fast->next;
            slow->next=fast;
        }
        else{
            slow=fast;
            fast=fast->next;
        }
    }
    return(head);
}
