/*Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:
*/
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
   int top=0,left=0,bottom=r-1,right=c-1;
   
      vector<int> v;
   

   while(top<=bottom && left<=right)
   {
       for(int  i=left;i<=right;i++)
          v.push_back(matrix[top][i]);
          
       top++;
       
       for(int i=top;i<=bottom;i++)
         v.push_back(matrix[i][right]);
         
       right--;
       
       if(top<=bottom)
       {
       for(int i=right;i>=left;i--)
         v.push_back(matrix[bottom][i]);
         
       bottom--;
       
       }
       if(left<=right)
       {
       for(int i=bottom;i>=top;i--) 
         v.push_back(matrix[i][left]);
         
       left++;
       
       }
   }
   return v;// code here 
    }
};
