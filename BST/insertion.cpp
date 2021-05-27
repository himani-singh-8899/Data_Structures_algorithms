/*Input:
     2
   /   \
  1     3
K = 4
Output: 1 2 3 4
Explanation: After inserting the node 4
Inorder traversal will be 1 2 3 4.*/

Node* insert(Node* root, int Key)
{
    if(root==NULL)
     return new Node(Key);
    else if(root->data<Key)
     root->right=insert(root->right,Key);
    else if(root->data>Key)
     root->left=insert(root->left,Key);
    return root;
}
