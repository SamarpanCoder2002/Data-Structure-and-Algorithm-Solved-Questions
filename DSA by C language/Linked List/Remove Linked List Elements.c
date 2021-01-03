
/*Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5*/


/*
*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* temp, *temp1;
    if(head==NULL)
        return(head);
    else{
        if(head->next==NULL && head->val==val){
            free(head);
            head=NULL;
        }
        else{
            temp=head;
            while(temp){
                if(head->val==val){
                    head=head->next;
                    free(temp);
                    temp=head;
                }
                else{
                    if(temp->next!=NULL && temp->next->val==val){
                        temp1=temp->next;
                        temp->next=temp1->next;
                        free(temp1);
                    }
                    else
                        temp=temp->next;
                }
            }
        }


    return(head);
    }
}
