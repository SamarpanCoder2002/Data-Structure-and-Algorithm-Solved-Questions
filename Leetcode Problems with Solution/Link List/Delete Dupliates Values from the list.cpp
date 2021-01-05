/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        else{
            ListNode *_main=head, *_next;
            while(_main){
                _next=_main->next;
                if(_next==NULL)
                    break;
                else{
                    if(_main->val==_next->val){
                        while(_main->val==_next->val){
                            ListNode *temp=_next;
                            _next=_next->next;
                            delete temp;
                            if(_next==NULL)
                                break;
                        }
                        _main->next=_next;
                    }
                }
                _main=_main->next;

            }
         return head;
        }

    }
};
