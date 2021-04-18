//Function to return the count of non-repeated elements in the array.
int countNonRepeated(int arr[], int n)
    { //arr[i]={1,1,2,2,3,3,4,5,6,7}
        int count=0;
        unordered_map<int,int> s;
        //store the count of the elements as a key value pair in unordered map
        for(int i=0 ;i<n;i++)
        {
            s[arr[i]]++;
        }
        //if the value of the key is greater than one ignore otherwise increse the 
        //increase the count 
        for(auto x:s){
         if(x.second>1)
           continue;
         else 
            count++;
    }
     //return count
    return count++;
    }
    //output= 4
