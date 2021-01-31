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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *travel1=list1,*travel2=list2, *start=NULL, *ending=NULL;
        while(travel2->next){
            travel2=travel2->next;
        }
        while(travel1){
            if(travel1->val == a-1){
                start=travel1;
                travel1=travel1->next;
                start->next=list2;
            }
            if(travel1->val == b){
                travel1=travel1->next;
                travel2->next=travel1;
            }
        travel1=travel1->next;
        }
        return list1;
    }
};
