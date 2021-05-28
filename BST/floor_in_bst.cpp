/*Input:
       8
     /  \
    5    9
   / \    \
  2   6   10
X = 3
Output: 2
Explanation: Floor of 3 in the given BST
is 2*/
int floor(Node* root, int key) 
{ 
    // Your code goes here
    Node *res=NULL;
    if (root == NULL) 
        return -1; 
    while(root!=NULL)
    {
        if(root->data==key)
            return root->data;
        else if(root->data>key)
            root=root->left;
        else
        {
            res=root;
            root=root->right;
        }
    }
    if(res==NULL)
      return -1;
  return res->data;

}
