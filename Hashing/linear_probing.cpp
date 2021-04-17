class Solution{
  public:
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        int hash_key;
        vector<int> v(hashSize,-1);
        
        
        for(int i=0;i<sizeOfArray;i++)
        {
            hash_key = arr[i] % hashSize;
            if(v[hash_key] == -1)
                v[hash_key] = arr[i];
            else
            {
                auto itr = find(v.begin()+hash_key+1, v.end(), -1); 
                if(itr == v.end())                                  
                    itr = find(v.begin(), v.begin()+hash_key, -1);  
                if(itr == v.end() || itr == v.begin()+hash_key)     
                    break;
                *itr = arr[i];
                   
                    
                }
        }
        return v;
    }

};
