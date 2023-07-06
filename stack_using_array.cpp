#include <bits/stdc++.h>
using namespace std;
class sta
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0)
            return true;
        else return false;
    }
};
int main()
{
    sta st;
    sta st1;
    int test;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        int valu;
        cin>>valu;
        st.push(valu);
    }
    int test1;
    cin>>test1;
    for(int i=0; i<test1; i++)
    {
        int valu1;
        cin>>valu1;
        st1.push(valu1);
    }
   // while(st1.empty()==false)
    //{
       // cout<<st1.top()<<endl;
        //st1.pop();
    //}
    bool flag=true;
    while (!st.empty())
    {
        if (st.top() != st1.top())
        {
            flag=false;
        }
        st.pop();
        st1.pop();
    }
    if (flag==false)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
}
