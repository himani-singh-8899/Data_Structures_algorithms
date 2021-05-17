/*Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output: 
{{1, 2, 3, 4},  
 {1, 2, 3, 4}  
 {1, 2, 3, 4}
 {1, 2, 3, 4}} */
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
           for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            
            }
        
            
        }
        
    
    }
};
