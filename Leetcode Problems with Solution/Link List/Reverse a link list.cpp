class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp=head->next;
        if (temp==NULL)
            return head;
        ListNode* temp1=temp->next;
        head->next=NULL;
        while(temp1){
            temp->next=head;
            head=temp;
            temp=temp1;
            temp1=temp1->next;
        }
        temp->next=head;
        return temp;
    }
};
