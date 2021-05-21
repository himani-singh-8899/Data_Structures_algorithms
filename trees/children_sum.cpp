/*Input:
     10
    /
  10 
Output: 1
Explanation: Here, every node is sum of
its left and right child.
Input:
       1
     /   \
    4     3
   /  \
  5    N
Output: 0
Explanation: Here, 1 is the root node
and 4, 3 are its child nodes. 4 + 3 =
7 which is not equal to the value of
root node. Hence, this tree does not
satisfy the given conditions.*/
/*Complete the function below

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

//Function to check whether all nodes of a tree have the value 
//equal to the sum of their child nodes.
int isSumProperty(Node *root)
{
 if(root==NULL)
    return 1;
 if(root->left==NULL &&root->right==NULL)
    return 1;
 int sum=0;
 if(root->left!=NULL)
 {
     sum+=root->left->data;
 }
 if(root->right!=NULL)
 {
     sum+=root->right->data;
 }
 return (root->data==sum &&
         isSumProperty(root->left) &&
         isSumProperty(root->right));
}
