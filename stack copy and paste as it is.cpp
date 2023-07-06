#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>myStack,st;
    //queue<int>myQueue,qe;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        myStack.push(x); // 10,20,30,40,50
    }
     for(int i=0; i<n; i++)
    {
      st.push(myStack.top());//50,40,30,20,10
      myStack.pop();
    }
    while(st.empty()==false)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
