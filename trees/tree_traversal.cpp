/* A binary tree node has data, pointer to left child
   and a pointer to right child  */
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
//input:10 20 30 40 60 50
//output:40 20 60 10 50 30

  vector<int> inOrder(Node* root)
  {
   vector<int> v;
   if(root!=NULL)
   {

       inOrder(root->left);
       cout<<(root->data)<<" ";
       inOrder(root->right);

   }
     return v;

  }
 vector<int> preOrder(Node* root)
  {
   vector<int> v;
   if(root!=NULL)
   {   
       cout<<(root->data)<<" ";
       preOrder(root->right);
       preOrder(root->left);
       
       }
     return v;

  }
 vector<int> postOrder(Node* root)
  {
   vector<int> v;
   if(root!=NULL)
   {   
       postOrder(root->left);
       postOrder(root->right);
       cout<<(root->data)<<" ";
       
       
       
       }
     return v;

  }



