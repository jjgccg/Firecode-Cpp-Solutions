bool is_list_even(listNode* head)
{
    int numNodes = 0;
    while(head != NULL)
    {
        numNodes++;
        head = head->next;
    }

    return (numNodes % 2 == 0);
}
