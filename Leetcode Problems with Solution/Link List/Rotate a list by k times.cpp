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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k>pow(10,9))
            k=k/pow(10,9);
        if(head==NULL or head->next==NULL)
            return head;
        while(k){
            ListNode *first=head,*second=head;
            while(first->next){
                second=first;
                first=first->next;
            }
            second->next=NULL;
            first->next=head;
            head=first;
            k--;
        }
        return head;
    }
};
