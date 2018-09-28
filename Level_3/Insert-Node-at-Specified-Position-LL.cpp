listNode* insert_at_position( listNode* head, int data,int pos)
{
    /*create new node*/
    listNode* newNode = new listNode;
    newNode->value = data;
    
    if(pos == 1)
    {
        newNode->next = head;
        return newNode;
    }
    
    listNode* ptr = head;
    int nodeBeforePos = 1;
    while(nodeBeforePos < pos - 1)
    {
        if(ptr == NULL) return head; /*index out of bounds*/
        ptr = ptr->next;
        nodeBeforePos++;
    }
    
    newNode->next = ptr->next;
    ptr->next = newNode;
    
    return head;
}