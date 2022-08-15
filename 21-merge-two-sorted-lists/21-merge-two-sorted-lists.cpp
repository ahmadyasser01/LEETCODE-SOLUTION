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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p =list1 , *q = list2;
        ListNode *head = new ListNode();
        ListNode *t = head;
        while(p!=NULL && q!=NULL){
            if(p->val < q->val) {
                
                t->next = p;
                p=p->next;
            }
            else if(p->val >=q->val){
                t->next = q;
                q = q->next;
            }
            t = t->next;
        }
        if(p) t->next=p;
        if(q) t->next =q;
        
        return head->next;
    }
};