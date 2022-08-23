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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode(0);
        ListNode * temp = head;
        ListNode * p = l1;
        ListNode * q = l2;
        int carry =0;
        while(true)
        {
                    int sum=0;

            if(carry==0 &&p==NULL &&q==NULL) break;
                ListNode *curr = new ListNode(0);

         if(carry==0 && p ==NULL && q ==NULL) break;
            if(p!=NULL) {
                sum+=p->val;
                p = p->next;
            }
             if(q!=NULL) {
                sum+=q->val;
                q = q->next;
            }
            if(carry>0)
            {
                sum+=carry;
                    }
            carry = sum/10;
            curr->val = sum - carry*10;
            temp->next = curr;
            temp = temp->next;

        }

        return head->next;

        
    }
};