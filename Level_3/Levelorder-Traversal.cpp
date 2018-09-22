// Level Order = Queue Data Structure
vector<int> level_order(treeNode* root)
{
    vector<int> nodeVals;
    if(root == NULL) return nodeVals;
    
    queue<treeNode*> levels;
    levels.push(root);
    
    while(!levels.empty())
    {
        treeNode* curr = levels.front();
        levels.pop();
        nodeVals.push_back(curr->value);
        
        if(curr->left != NULL) levels.push(curr->left);
        if(curr->right != NULL) levels.push(curr->right);
    }
    
    return nodeVals;
}