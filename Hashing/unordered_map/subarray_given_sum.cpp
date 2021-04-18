//Function to count the number of subarrays which adds to the given sum.
//n = 5
//arr[] = {10,2,-2,-20,10}
//sum = -10
    int subArraySum(int arr[], int n, int sum)
    {
        //create a unordered map with key=element value is count of pre_sum
        unordered_map<int,int> m;
        int pre_sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            pre_sum+=arr[i];
            if(pre_sum==sum)
            {
             count++;
            }
            if(m.find(pre_sum-sum)!=m.end())
            {
             count+=(m[pre_sum-sum]);
            }
        m[pre_sum]++;
        }
        return count;
    }
