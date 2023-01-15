//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>str;
        for(int i=0;i<x.size();i++)
        {
            if( x[i]=='(' || x[i]=='{' || x[i]=='[' )
            {
                str.push(x[i]);
            }
            else
            {
                if(str.size()!=0 && ( (x[i]==')' && str.top()=='(') || (x[i]=='}' && str.top()=='{') || (x[i]==']' && str.top()=='[')))
                {
                    str.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
        if(str.size()==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends