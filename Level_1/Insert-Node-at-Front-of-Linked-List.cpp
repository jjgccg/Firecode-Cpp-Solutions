listNode* insert_at_head( listNode* head, int data)
{
    listNode* newNode = new listNode;
    newNode->value = data;
    newNode->next = head;
    head = newNode;

    return head;
}
