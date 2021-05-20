/*Input:
            10
          /    \
        20      30
     /     \
    40     60
Output: 10 $ 20 30 $ 40 60 $*/

/* A binary tree Node

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

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
  vector<vector<int>> v;
  if(node==NULL) cout<<" ";
  queue<Node*> q;
  q.push(node);
  q.push(NULL);
 
  while(q.size()>1)
  {
      Node *curr=q.front();
      q.pop();
      if(curr==NULL)
      {
          cout<<"$"<<" ";
          q.push(NULL);
          continue;
      }
      cout<<(curr->data)<<" ";
      if(curr->left!=NULL)
       q.push(curr->left);
      if(curr->right!=NULL)
       q.push(curr->right);
  }
  if(q.size()==0);
  cout<<"$"<<"";
  return v;
  
}
