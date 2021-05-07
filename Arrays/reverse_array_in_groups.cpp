/*Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.*/
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
       int l,r;
       int temp;
        for(int i=0;i<n;i=i+k){
            l=i;
            if(n-1<i+k-1){
                r=n-1;
            }
            else{
                r=i+k-1;
            }
            while(l<r){
                int temp=arr[l];
                arr[l]=arr[r];
                arr[r]=temp;
                l++;r--;   
            }
        }
       
    }
    
};
