#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>myStack,st;
    queue<int>myQueue,qe;
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        myStack.push(x); // 10,20,30,40,50
    }
   // for(int i=0; i<n; i++)
    //{
     // st.push(myStack.top());//50,40,30,20,10
     // myStack.pop();
   // }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        myQueue.push(x);
    }
    if (myStack.size() != myQueue.size())
        {
           return 0;
        }
    bool flag=true;
    while(!myQueue.empty())
    {

       if( myStack.top()!=myQueue.front())// st er top 50,40,30,20,10 ar myQueue-10 20 30 40 50
        {
            flag=false;
            break;
        }
        myStack.pop();
        myQueue.pop();
    }
    if(flag==true) //just = holo assign kora bujay ar == comparizon bujay.
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
