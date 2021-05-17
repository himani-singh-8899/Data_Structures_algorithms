/*Input:
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7*/

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
    for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			swap(matrix[i][j], matrix[j][i]);;
       
  for(int i = 0; i < n; i++)
	{
	    int low = 0, high = n - 1;
	    
	    while(low < high)
	    {
	        swap(matrix[low][i], matrix[high][i]);
	        
	        low++;
	        high--;
	    }
	}
    }
};
