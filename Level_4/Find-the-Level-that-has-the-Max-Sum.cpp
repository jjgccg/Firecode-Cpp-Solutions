int find_max_sum_level(treeNode* root)
{
    if(root == NULL) return -1;
    if(root->left == NULL && root->right == NULL) return 0;
    
    queue<treeNode*> q;
    int maxSum = 0;
    int maxSumLevel = 0;
    int currLevel = 0;
    
    q.push(root);
    while(!q.empty())
    {
        int qSize = q.size();
        int currSum = 0;
        
        while(qSize != 0) //per level
        {
            treeNode* currNode = q.front();
            q.pop();
            
            currSum += currNode->value;
            if(currNode->left != NULL) q.push(currNode->left);
            if(currNode->right != NULL) q.push(currNode->right);
            
            qSize--;
        }
        
        //finished with the level - set newest maxSum and increment level
        if(currSum > maxSum)
        {
            maxSum = currSum;
            maxSumLevel = currLevel;   
        }
        
        currLevel++;
    }
    
    return maxSumLevel;
}