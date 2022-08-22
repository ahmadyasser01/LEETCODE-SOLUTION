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
    void reorderList(ListNode* head) {
        ListNode* i = head;
        ListNode* inext= head->next;
        stack<ListNode*> stk;
        ListNode* p = head;
        while(p!=NULL)
        {
            stk.push(p);
            p=p->next;
        }
        while(inext!=NULL &&inext!=stk.top()){
            ListNode* temp = stk.top();
            stk.pop();
            i->next =temp;
            temp->next = inext;
            stk.top()->next= NULL;
            i = inext;
            inext = inext->next;
        }
    }
};