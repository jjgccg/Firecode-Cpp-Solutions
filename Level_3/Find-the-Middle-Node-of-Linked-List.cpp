listNode* find_middle_node(listNode* head)
{
    if(head == NULL || head->next == NULL || head->next->next == NULL) return head;
    if(head->next->next->next == NULL) return head->next;
    
    listNode* mid = head->next;
    listNode* fastPtr = mid->next->next; //2x the speed of mid
    
    while(fastPtr->next != NULL)
    {
        if(fastPtr->next->next == NULL)
        {
            mid = mid->next;
            return mid;
        }
        mid = mid->next;
        fastPtr = fastPtr->next->next;
    }
    
    return mid;
}