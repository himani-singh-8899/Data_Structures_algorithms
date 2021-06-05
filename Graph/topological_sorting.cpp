/*
Input:3 4
3 0
1 0
2 0
Output:
1
Explanation:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 3, 2, 1, 0.
*/

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	     vector <int> ans;
	    vector<int> indegree(V,0);
	    //starting indegree of every index
	    for(int u=0;u<V;u++)
	    {
	        for(int x: adj[u])
	         indegree[x]++;
	    }
	    //creating a queue
	    queue <int> q;
	    //add all 0 indegree vertices to the queue
	    for(int i=0;i<V;i++)
	      if(indegree[i]==0)
	         q.push(i);
	    //implement bfs
	    while(q.empty()==false)
	    {
	        int u=q.front();
	        q.pop();
	       
	        ans.push_back(u);
	        for(int x: adj[u])
	        {
	            //reduce indegree by 1
	            indegree[x]--;
	            //if indegree is 0 , add it to the queue
	            if(indegree[x]==0)
	             q.push(x);
	        }
	    }
	    return ans;
	}
};
