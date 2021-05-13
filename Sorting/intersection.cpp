/*Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common 
elements in both the arrays.*/
class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    
         {   
        vector<int> g;
        int i=0,j=0;
        while(i<N && j<M)
        {
            if(i>0 && arr1[i]==arr1[i-1]){
                i++;
                continue;
            }
            if(j>0 && arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i]<arr2[j]){
                i++;
            }else if(arr1[i]>arr2[j]){
                j++;
            }else{
                g.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return g;
    }

};
