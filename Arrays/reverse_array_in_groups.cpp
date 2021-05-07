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
