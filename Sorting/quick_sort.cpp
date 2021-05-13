/*
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot,
put x at its correct position in sorted array and put all smaller elements (smaller than x) 
before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
*/

void quickSort(int arr[], int low, int high)
{
    
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
}
    
int partition(int arr[], int low, int high)
{
    int pivot=arr[low];
    int i=low-1,j=high+1;
    while(low<high){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
}
