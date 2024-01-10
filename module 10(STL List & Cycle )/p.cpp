class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        if (head->val == val)
        {
            ListNode *tmp = head;
            if (head->val != head->next->val)
                head = head->next;
            delete tmp;
        }
        ListNode *tmp = head;
        while (tmp != NULL && tmp->next != NULL)

        {
            if (tmp->next->val == val)
            {
                ListNode *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
            else
            {

                tmp = tmp->next;
            }
        }

        return head;
    }
    ListNode *removeElements(ListNode *head, int val)
    {
        // Handle cases where the first node(s) have the value val
        while (head != nullptr && head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }

        ListNode *current = head;

        // Traverse the list and remove nodes with the value val
        while (current != nullptr && current->next != nullptr)
        {
            if (current->next->val == val)
            {
                ListNode *temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else
            {
                current = current->next;
            }
        }

        return head;
    }
};