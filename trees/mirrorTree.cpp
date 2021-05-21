/*Input:
      10
     /  \
    20   30
   /  \
  40  60
Output: 30 10 60 20 40
Explanation: The tree is
      10               10
    /    \  (mirror) /    \
   20    30    =>   30    20
  /  \                   /   \
 40  60                 60   40
The inroder traversal of mirror is
30 10 60 20 40.*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
     if(node)
     {
         mirror(node->left);
         mirror(node->right);
         Node *temp=node->left;
         node->left=node->right;
         node->right=temp;
         
     }
     return;
    }
};
