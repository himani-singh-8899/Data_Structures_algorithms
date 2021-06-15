/*
Input: 
Q = 6 
Queries = {(i, 2), (i, 4), (i, 3),
(i, 5), (h), (f, 8)}
Output: 
5
No
Explanation: 
Inserting 2, 4, 3, and 5 
onto the stack. Returning top element 
which is 5. Finding 8 will give No, 
as 8 is not in the stack.

*/




//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


//Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    s.push(x);
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    
    s.pop();
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x=s.top();
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    bool exists=false;
    
  while(s.empty()==false){ 
        if(s.top()==val){   
            exists=true;    
            break;
        }
        s.pop();
    }
    
    if(exists==true){
        return true;
    }
    else{
        return false;
    }
}

// { Driver Code Starts.

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    stack<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            insert(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            remove(s);
	        }
	        else if(ch=='h')
	        {
	            headOf_Stack(s);
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            if(find(s,x))
	            cout << "Yes";
	            else cout << "No";
	            cout << endl;
	        }
	        
	    }
	}
	return 0;
}


  // } Driver Code Ends
