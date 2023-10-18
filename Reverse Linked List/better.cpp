struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class solution
{
public:
    ListNode *reverseLinkedList(ListNode *head)
    {
        ListNode *newHead = nullptr;
        while (head != nullptr)
        {
            ListNode *next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }

        return head;
    }
};