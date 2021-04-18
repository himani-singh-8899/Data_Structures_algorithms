//Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
      //create unordered map of key value pair
        unordered_map<int,int> m;
      //increase the count of elemensr in the map for first array a
        for(int i=0;i<N;i++)
         m[A[i]]++;
      //decrease the count of th elements in the map for the second array
        for(int i=0;i<N;i++)
         m[B[i]]--;
      // if count of th elements if not equal to zero then return false otherwise it will returm true
        for(auto x:m){
            if(x.second!=0){
              return 0;
            }
        }
              return 1;
       
    }
