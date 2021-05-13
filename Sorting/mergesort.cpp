/*

MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
 
 */
void mergesort(int arr[], int low,int high)
{ 
  if(low<high)
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
//merge function for mergesort
//setting up auxiliary array
void merge(int arr[],int low, int mid, int high)
{
  int n1=mid-low+1;
  int n2=high-mid;
  int left[n1],right[n2];//creating two arrays to store the two unsorted arrays
  for(int i=0;i<n1;i++)
  {
    left[i]=arr[low+i];//storing the elements less than mid in left and incrementing the index low+i
  }
  for(int i=0;i<n2;i++)
  {
    right[i]=arr[n1+1];//storing the elements more than the mid in the roght array
  }
int i=0,j=0,k=0;
while(i<n1 && j<n2)
{
  if(left[i]<right[j])
  {
    arr[k]=left[i]; 
    i++;k++;
  }
  else
  {
    arr[k]==right[j];
    k++;j++;
  }
}
 while(i<n1) {arr[k]=left[i];i++;k++;}
 while[j<n2) {arr[k]=right[j];j++;k++;}
        
}
  

//
