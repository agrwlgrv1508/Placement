#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack <int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int top_ele=st.top();
    st.pop();
    insertAtbottom(st,ele);
    st.push(top_ele);
}
void reverse(stack <int> &st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st,ele);
}

int main()
{
	stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;
}
