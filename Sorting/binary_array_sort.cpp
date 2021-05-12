/*Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.*/


void binSort(int A[], int N)
{
    int i=-1,j=N;
       while(1){
           do{
               i++;
           }while(A[i]==0);
           do{
               j--;
           }while(A[j]==1);
           if(i>=j){
               break;
           }
           int temp=A[i];
           A[i]=A[j];
           A[j]=temp;
          // swap(&A[i],&A[j]);
       }
}
