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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *slow = head, *first = head;
        while(first and first->next){
            slow=slow->next;
            first=first->next->next;
            if(slow == first)
                return true;
        }
        return false;
    }
};
