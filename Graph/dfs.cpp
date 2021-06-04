/*Input:

Output: 0 1 2 4 3
Explanation: 
0 is connected to 1, 2, 4.
1 is connected to 0.
2 is connected to 0.
3 is connected to 0.
4 is connected to 0, 3.
so starting from 0, it will go to 1 then 2
then 4, and then from 4 to 3.
Thus dfs will be 0 1 2 4 3.*/

class Solution {
public:
    void dfs(vector<int> adj[], vector<bool>& visited, int s, vector<int>& ans){
        visited[s]=true;
        ans.push_back(s);
        for(int u: adj[s]){
            if(visited[u]==false){
                dfs(adj, visited, u, ans);
            }
        }
    }
    vector<int>dfsOfGraph(int V, vector<int> adj[]){
        // Code here
        vector<int> ans;
        vector<bool> visited(V, false);
        dfs(adj, visited, 0, ans);
        return ans;
    }
};
