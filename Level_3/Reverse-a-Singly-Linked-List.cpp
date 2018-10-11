listNode* reverse_list(listNode* head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL) return head;
    
    listNode* prevNode = NULL;
    listNode* currNode = head;
    listNode* nextNode = head->next;
    
    while(nextNode != NULL)
    {
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
        nextNode = nextNode->next;
    }
    currNode->next = prevNode;
    
    return currNode;
}