#include <bits/stdc++.h>
using namespace std;
int main()
{
     stack<int>s;
    queue<int> myQueue,q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);//10 20 30 40 50
    }
    while(!q.empty())//queue theke sob stack e chichi ulta kore sore hocche
    {
        s.push(q.front());
        q.pop();
    }
     while(!s.empty())// stack theke abar queue te dici.. stack e jemon chilo temon abar queue te store hoche ja holo ulta
    {
        q.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
