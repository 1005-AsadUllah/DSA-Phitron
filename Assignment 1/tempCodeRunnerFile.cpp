int check(Node *head, Node *head1)
{

    int size1 = size_list(head);

    int size2 = size_list(head1);
    int flag = 1;

    if (size1 != size2)
    {
        flag = 0;
        return flag;
    }
    else
    {
        while (size1--)
        {
            if (head->val != head1->val)
            {
                flag = 0;
                return flag;
            }
            head = head->next;
            head1 = head1->next;
        }
    }
    return flag;
}