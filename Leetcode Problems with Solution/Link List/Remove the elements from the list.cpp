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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        if((head == NULL) or (head->next == NULL and head->val!=val))
            return head;

        while(head && head->val == val){
            temp=head;
            head=head->next;
            delete temp;
        }
        if(head==NULL)
            return head;
        temp=head;
        ListNode *temp1=temp->next;
        while(temp){
            if(temp->next && temp->next->val==val){
                temp1=temp->next;
                temp->next=temp->next->next;
                delete temp1;
            }
            else
                temp=temp->next;
        }
    return head;
    }
};
