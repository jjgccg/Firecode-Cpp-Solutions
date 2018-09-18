bool validate_node(treeNode* node, int min, int max)
{
    if(node == NULL) return true;
    
    if(node->value < max && 
       node->value >= min && 
       validate_node(node->left, min, node->value) &&
       validate_node(node->right, node->value, max))
    {
        return true;
    }
    
    return false;
}

bool validate_bst(treeNode* root)
{
    return validate_node(root, INT_MIN, INT_MAX);
}