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
    ListNode *sortList(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return head;
        else
            quicksort(head,NULL);
     
     
    return head;
}
private: 
   void quicksort(ListNode *head,ListNode *tail)
    {
        if(head != tail && head->next != tail)
        {
                ListNode *mid = partition(head,tail);
                quicksort(head,mid);
                quicksort(mid->next,tail);
        }   
    }
     
    ListNode *partition(ListNode *low,ListNode *high)
    {
        int key=low->val;
        ListNode *loc=low;
         for(ListNode *i=low->next;i!=high;i=i->next)
        {
            if(i->val<key)
            {
                loc=loc->next;
                swap(loc->val,i->val);
            }
        }
        swap(low->val,loc->val);
        return loc;
    }
};