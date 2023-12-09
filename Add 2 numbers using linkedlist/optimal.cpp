 ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry = 0;
        while(list1 != NULL || list2 != NULL || carry)
        {
            int sum = 0;
            if(list1 != NULL)
            {
                sum += list1->val;
                list1 = list1->next;
            }
            if(list2 != NULL)
            {
                sum += list2->val;
                list2 = list2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return dummy->next;
    }