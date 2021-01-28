/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        ListNode *slow=head,*fast=head;
        int cyclefound = 0;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cyclefound=1;
                break;
            }
        }
        while(cyclefound){
            slow = head;
            while(fast!=slow){
                fast=fast->next;
                slow=slow->next;
            }
            return slow;
        }
        return NULL;
    }
};
