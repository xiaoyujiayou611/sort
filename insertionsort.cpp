class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        if(head==NULL || head->next == NULL)return head;
        list<int> value;
        ListNode *p=head;
        while(p!=NULL)
        {
            value.push_back(p->val);
            p=p->next;
        }
        value.sort();
        for(p=head;p!=NULL;p=p->next)
        {
            p->val=value.front();
            value.pop_front();
        }
             
        return head;
    }
};