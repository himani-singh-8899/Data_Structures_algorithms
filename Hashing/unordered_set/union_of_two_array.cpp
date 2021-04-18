//Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //create unordered set
        unordered_set<int> s;
      //insert all the elements from array a to set
        for(int i=0;i<n;i++)
          s.insert(a[i]);
      //insert elements from array b to set
        for(int i=0 ;i<m;i++)
          s.insert(b[i]);
      //return the size of set
        return s.size();
    }
