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
vector< ListNode *> get_heads (ListNode * head,int k)
    {
        ListNode * temp = head ;
        vector< ListNode *> heads;
        int x=0;
        ListNode * tail;
        while(temp!=NULL) {
          if(x%k==0) heads.push_back(temp);
          tail = temp;
          temp = temp->next;
          x++;
        }
      //  if(x%k==0) heads.push_back(tail);
        return heads;
    }
    vector< ListNode *> reverse(ListNode * head,int k)
    {
        ListNode *p=head,*q=NULL,*r=NULL;
        ListNode *tail = head;
        while(p!=NULL && k>0)
        {
            r = q;
            q = p;
            p = p->next;
            q->next =r;
            k--;

        }
        head = q;
        return {head,tail};
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode *> heads = get_heads(head,k);
        ListNode *last = heads.back();
        int count =0;
        while(last!=NULL) {
            last= last->next;
            count++;
        }
        if(count<k) {
            last = heads.back();
            heads.pop_back(); }
        vector<vector<ListNode*>> res;
        for(auto &x : heads){
            res.push_back(reverse(x,k));
        }
        for(int i=0;i<res.size()-1;i++)
        {
            res[i][1]->next = res[i+1][0];
        }
        res.back()[1]->next = last;
        head = res[0][0];
        return head;
    }
};