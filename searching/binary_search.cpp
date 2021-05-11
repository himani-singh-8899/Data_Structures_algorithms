int bsearch(int arr[],int n,int x)
{
  int low=0,int high=n-1;
  while(low<=high)
  {
    int id=(low+high)/2;
    if(arr[mid]==x)
      return mid;
    if(arr[mid]>x)
      high=mid-1;
    if(arr[mid]<x)
      low=mid+1;
  }
  return -1;
 }

