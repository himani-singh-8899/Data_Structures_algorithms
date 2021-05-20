/*Input:
        10
     /      \
    20       30
  /   \
 40   60
Output:10 20 30 40 60 N N*/
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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector <int> v;
      if(node==NULL) cout<<"N"<<" ";
      queue<Node*> q;
      q.push(node);
      while(q.empty()==false)
      {
          Node *curr=q.front();
          q.pop();
          v.push_back(curr->data);
          if(curr->left!=NULL)
           q.push(curr->left);
          if(curr->right!=NULL)
           q.push(curr->right);
      }
      return v;
    }
};
