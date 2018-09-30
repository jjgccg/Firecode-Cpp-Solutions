listNode* find_n_node_from_end(listNode* head, int n)
{
    if(n <= 0 || head == NULL) return NULL;
    
    listNode* n1 = head;
    listNode* n2 = head;
    
    for(int i = 1; i < n; i++)
    {
        n1 = n1->next;
        if(n1 == NULL) return NULL;
    }
    
    while(n1->next != NULL)
    {
        n1 = n1->next;
        n2 = n2->next;
    }
    
    return n2;
}