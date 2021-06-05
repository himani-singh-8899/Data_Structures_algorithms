/*Input:

4 4
0 1
1 2
2 3
3 3

Output: 1
Explanation: 3 -> 3 is a cycle

*/

class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	 bool visited[V]; 
	for(int i=0;i<V; i++) 
		visited[i] = false;
	bool recSt[V]; 
	for(int i=0;i<V; i++) 
		recSt[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            if(Dfs(adj,i,visited,recSt)==true)
                return true;
    }
    return false;
	}
	
	bool Dfs(vector<int> adj[], int s, bool visited[], bool recSt[])
	{
	     visited[s]=true;
    recSt[s]=true;
    
    for(int u:adj[s]){
        if(visited[u]==false && Dfs(adj,u,visited,recSt)==true)
                {return true;}
        else if(recSt[u]==true)
            {return true;}
    }
    recSt[s]=false;
    return false;
	 
	}
};
