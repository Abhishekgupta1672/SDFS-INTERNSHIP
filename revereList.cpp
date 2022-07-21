class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* cur = head , *prev = NULL;
        while(left>1)
        {
            prev = cur;
            cur = cur->next;
            left--;
            right--;
        }
        ListNode* con = prev, *next = NULL, *temp = cur;
        while(right>0)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            right--;
        }
        if(con!=NULL)
            con->next = prev;
        else
            head = prev;
        temp->next = cur;
        return head;
    }
};
