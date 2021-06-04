/*Input: 
5 5
0 4
1 2
1 4
2 3
3 4
Output: 0
Explanation: No cycle in the graph.
*/
class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
	bool Dfs(vector<int> adj[],int s, bool visited[],int parent)
	{
	    visited[s]=true;
	    for(int u:adj[s])
	     {
	       if(visited[u]==false){
	         if(Dfs(adj,u,visited,s)==true)
	            {return true;}}
	       else if(u!=parent)
	         {return true;}
	     }  
	     return false;
	}
	
	
	bool isCycle(int V, vector<int>adj[])
	{
	    bool visited[V];
	    for(int i=0;i<V;i++)
	      visited[i]=false;
	      
	    for(int i=0;i<V;i++){
	      if(visited[i]==false)
	        if(Dfs(adj,i,visited,-1)==true)
               return true;
	    }
        return false;
	}
};
