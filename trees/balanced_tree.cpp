/*Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. */
/* A binary tree node structure

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


//Function to check whether a binary tree is balanced or not.
int height(Node *node)
{
    if(node==NULL) return 0;
    else
    return 1+ max(height(node->left),height(node->right));
}
int max(int a, int b)
{
    return (a >= b) ? a : b;
}
bool isBalanced(Node *root)
{   
    
    if(root==NULL) return 1;
    int lh =height(root->left);
    int rh =height(root->right);
                                      
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)) 
       return 1;
    return 0;
}
