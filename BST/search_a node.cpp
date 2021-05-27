/*Input:
      6
       \
        7
       / \
      8   9
x = 11
Output: 0
Explanation: As 11 is not present in 
he given nodes , so the output will
be 0.*/

bool search(Node* root, int x)
{
    if(root==NULL)
      return false;
    else if(root->data==x)
      return true;
    else if(root->data>x)
      return search(root->left,x);
    else 
      return search(root->right,x);
}
