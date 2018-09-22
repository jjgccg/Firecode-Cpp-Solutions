listNode* insert_at_tail( listNode* head, int data)
{
    listNode* tail = new listNode;
    tail->value = data;
    tail->next = NULL;
    
    if(head == NULL) return tail;
    
    listNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = tail;
    
    return head;
}

