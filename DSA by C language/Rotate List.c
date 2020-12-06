
//Given the head of a linked list, rotate the list to the right by k places.

// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]

struct ListNode* rotate(struct ListNode *head){
    struct ListNode*last,*pre_last=head;
    while(pre_last->next->next)
        pre_last=pre_last->next;
    last=pre_last->next;
    last->next=head;
    head=last;
    pre_last->next=NULL;
    return(head);
}

struct ListNode* rotateRight(struct ListNode* head, int k){
        if(k>=pow(10,9))
            k=k/pow(10,9);
        if(head==NULL)
            return(head);
        else if(head->next!=NULL){
            while(k){
                head = rotate(head);
                k--;
                }
        }
        return(head);
}
