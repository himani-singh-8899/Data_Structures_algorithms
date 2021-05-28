/*Input:
      5
    /   \
   1     7
    \
     2 
      \
       3
X = 3
Output: 3
Explanation: We find 3 in BST, so ceil
of 3 is 3.*/
int findCeil(Node* root, int input) 
{ 
    Node *res=NULL;
    if (root == NULL) 
        return -1; 
  
    while(root!=NULL)
    {
        if(root->data==input)
         return root->data;
        else if(root->data<input)
          root=root->right;
        else
        {
            res=root;
            root=root->left;
        }
    }
  
    return res->data;
} 
