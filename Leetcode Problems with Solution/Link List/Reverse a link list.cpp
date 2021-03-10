class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;

        ListNode* second=head->next, *third = head->next->next;

        head->next=NULL;
        while(third){
            second->next=head;
            head=second;
            second=third;
            third=third->next;
        }
        second->next=head;
        return second;
    }
};
