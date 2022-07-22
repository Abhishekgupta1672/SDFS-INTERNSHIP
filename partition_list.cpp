class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* temp = small;
        ListNode* big = new ListNode(0);
        ListNode* temp2 = big;
        ListNode* cur = head;
        while(cur)
        {
            if(cur->val < x)
            {
                small->next = cur;
                small = cur;
            }
            else
            {
                big->next = cur;
                big = cur;
            }
            cur = cur->next;
        }
        big->next = NULL;
        small->next = temp2->next;
        return temp->next;
    }
};

