class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL ||  head->next==NULL)
        return false;

        ListNode* slow=head;
        ListNode* fast=head;
        bool ans=false;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                ans=true;
                return true;
            }
        }
        return ans;
    }
};