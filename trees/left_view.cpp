/*Input:
   1
 /  \
3    2
Output: 1 3
Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   


*/
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int> v;
   if(root==NULL)
     return v;
   queue <Node*> q;
   q.push(root);
   while(q.empty()==false)
   {
       int count=q.size();
       for(int i=0;i<count;i++)
       {
           Node *curr=q.front();
           q.pop();
           if(i==0)
            v.push_back(curr->data);
           if(curr->left!=NULL)
              q.push(curr->left);
           if(curr->right)
              q.push(curr->right);
    
       }
   }
   return v;
}
