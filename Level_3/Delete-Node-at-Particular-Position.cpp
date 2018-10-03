listNode* delete_at_pos(listNode* head, int n)
{
    if(head == NULL || n <= 0) return head;
    if(n == 1) return head->next;
    
    listNode* ptr = head;
    for(int i = 1; i < n - 1; i++) //stop just before node of interest
    {
        if(ptr->next == NULL) return head; //out of range
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;
    
    return head;
}