/*Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4*/
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



class Solution
{
    public:
    int res=0;
    int height(Node *node)
    {
        if(node==NULL) return 0;
        int lh=height(node->left);
        int rh=height(node->right);
        res=max(res,lh+rh+1);
        return 1+max(lh,rh);
    }//Function to return the diameter of a Binary Tree.
    int diameter(Node* root)
    {
      
      height(root);
      return res;
    }

};
